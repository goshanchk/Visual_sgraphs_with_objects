#!/usr/bin/env python3
from dataclasses import dataclass
import math
import os
from typing import Dict, Optional, Sequence, Tuple

import cv2
import numpy as np
import rclpy
from cv_bridge import CvBridge
from message_filters import ApproximateTimeSynchronizer, Subscriber
from rclpy.node import Node
from sensor_msgs.msg import CameraInfo, Image
from visualization_msgs.msg import Marker, MarkerArray

os.environ.setdefault("TORCH_FORCE_NO_WEIGHTS_ONLY_LOAD", "1")

try:
    import torch
    from ultralytics import YOLO
    from ultralytics.nn.tasks import ClassificationModel, DetectionModel, PoseModel, SegmentationModel
except ImportError:
    torch = None
    YOLO = None
    ClassificationModel = None
    DetectionModel = None
    PoseModel = None
    SegmentationModel = None


@dataclass
class TrackState:
    label: str
    bbox: Tuple[int, int, int, int]
    center: Tuple[int, int]
    point: Optional[Tuple[float, float, float]]
    last_seen_sec: float


class ObjectSegmenterYoloV6Seg(Node):
    def __init__(self) -> None:
        super().__init__("object_segmenter_yolov6seg")
        self.bridge = CvBridge()
        self.camera_info_msg: Optional[CameraInfo] = None
        self.model = None
        self._warned_missing_camera_info = False
        self.tracks: Dict[int, TrackState] = {}
        self.next_track_id = 0

        self.declare_parameter("model_path", "yolov6n-seg.pt")
        self.declare_parameter("device", "cpu")
        self.declare_parameter("confidence_threshold", 0.35)
        self.declare_parameter("iou_threshold", 0.45)
        self.declare_parameter("visualize", True)
        self.declare_parameter("use_masks", True)
        self.declare_parameter("min_depth_m", 0.1)
        self.declare_parameter("max_depth_m", 8.0)
        self.declare_parameter("marker_scale", 0.18)
        self.declare_parameter("track_max_age_sec", 1.5)
        self.declare_parameter("track_min_iou", 0.05)
        self.declare_parameter("track_center_dist_px", 140.0)
        self.declare_parameter("track_position_smoothing", 0.80)
        self.declare_parameter("allowed_classes", [])

        self.visualize = bool(self.get_parameter("visualize").value)
        self.use_masks = bool(self.get_parameter("use_masks").value)
        self.min_depth_m = float(self.get_parameter("min_depth_m").value)
        self.max_depth_m = float(self.get_parameter("max_depth_m").value)
        self.marker_scale = float(self.get_parameter("marker_scale").value)
        self.track_max_age_sec = float(self.get_parameter("track_max_age_sec").value)
        self.track_min_iou = float(self.get_parameter("track_min_iou").value)
        self.track_center_dist_px = float(self.get_parameter("track_center_dist_px").value)
        self.track_position_smoothing = float(self.get_parameter("track_position_smoothing").value)
        self.allowed_classes = set(self.get_parameter("allowed_classes").value)
        self.confidence_threshold = float(self.get_parameter("confidence_threshold").value)
        self.iou_threshold = float(self.get_parameter("iou_threshold").value)
        self.device = str(self.get_parameter("device").value)
        self.model_path = str(self.get_parameter("model_path").value)

        self.overlay_pub = self.create_publisher(Image, "/vs_graphs/object_segmented_image", 1)
        self.marker_pub = self.create_publisher(MarkerArray, "/vs_graphs/object_markers", 1)

        self.create_subscription(CameraInfo, "camera_info", self._camera_info_cb, 10)
        self.image_sub = Subscriber(self, Image, "image")
        self.depth_sub = Subscriber(self, Image, "depth")
        self.sync = ApproximateTimeSynchronizer([self.image_sub, self.depth_sub], queue_size=10, slop=0.15)
        self.sync.registerCallback(self._synced_cb)

        self._load_model()

    def _camera_info_cb(self, msg: CameraInfo) -> None:
        self.camera_info_msg = msg
        self._warned_missing_camera_info = False

    def _load_model(self) -> None:
        if YOLO is None:
            self.get_logger().error("ultralytics not installed")
            return
        try:
            if torch is not None and hasattr(torch.serialization, "add_safe_globals"):
                safe_globals = [m for m in (SegmentationModel, DetectionModel, PoseModel, ClassificationModel) if m is not None]
                if safe_globals:
                    torch.serialization.add_safe_globals(safe_globals)
            self.model = YOLO(self.model_path)
            self.get_logger().info(f"Loaded YOLOv6-seg model: {self.model_path}")
        except Exception as exc:
            self.get_logger().error(f"Failed to load model '{self.model_path}': {exc}")
            self.model = None

    def _synced_cb(self, image_msg: Image, depth_msg: Image) -> None:
        if self.model is None:
            return
        if self.camera_info_msg is None:
            if not self._warned_missing_camera_info:
                self.get_logger().warn("Waiting for camera_info")
                self._warned_missing_camera_info = True
            return

        try:
            color = self.bridge.imgmsg_to_cv2(image_msg, desired_encoding="bgr8")
            depth = self.bridge.imgmsg_to_cv2(depth_msg, desired_encoding="passthrough")
            results = self.model.predict(
                source=color,
                conf=self.confidence_threshold,
                iou=self.iou_threshold,
                device=self.device,
                verbose=False,
            )
        except Exception as exc:
            self.get_logger().error(f"Segmentation callback failed: {exc}")
            return

        now_sec = self._stamp_to_sec(image_msg.header.stamp)
        self._prune_tracks(now_sec)

        if not results:
            return

        overlay = color.copy()
        marker_array = MarkerArray()
        delete_all = Marker()
        delete_all.header = image_msg.header
        delete_all.action = Marker.DELETEALL
        marker_array.markers.append(delete_all)

        result = results[0]
        names = result.names
        boxes = result.boxes
        masks = None
        if self.use_masks and getattr(result, "masks", None) is not None and getattr(result.masks, "data", None) is not None:
            masks = result.masks.data.cpu().numpy()

        marker_id = 0
        for idx in range(len(boxes)):
            box = boxes[idx]
            cls_id = int(box.cls.item())
            label = names[cls_id] if isinstance(names, dict) else names[cls_id]
            if self.allowed_classes and label not in self.allowed_classes:
                continue

            conf = float(box.conf.item())
            x1, y1, x2, y2 = [int(v) for v in box.xyxy[0].tolist()]
            x1 = max(0, min(x1, color.shape[1] - 1))
            x2 = max(0, min(x2, color.shape[1] - 1))
            y1 = max(0, min(y1, color.shape[0] - 1))
            y2 = max(0, min(y2, color.shape[0] - 1))
            if x2 <= x1 or y2 <= y1:
                continue

            mask = None
            cx, cy = (x1 + x2) // 2, (y1 + y2) // 2
            if masks is not None and idx < len(masks):
                mask = masks[idx]
                if mask.shape[:2] != color.shape[:2]:
                    mask = cv2.resize(mask, (color.shape[1], color.shape[0]), interpolation=cv2.INTER_LINEAR)
                mask = mask > 0.5
                ys, xs = np.nonzero(mask)
                if xs.size > 0:
                    cx, cy = int(np.median(xs)), int(np.median(ys))

            depth_m = self._estimate_depth(depth, cx, cy, mask, x1, y1, x2, y2)
            point = self._project(cx, cy, depth_m) if depth_m is not None else None

            track_id, tracked_point, tracked_bbox = self._update_track(label, (x1, y1, x2, y2), point, (cx, cy), now_sec)

            color_bgr = self._class_color(cls_id)
            if mask is not None:
                overlay = self._blend_mask(overlay, mask, cls_id)
            tx1, ty1, tx2, ty2 = tracked_bbox
            tcx, tcy = int(round((tx1 + tx2) / 2.0)), int(round((ty1 + ty2) / 2.0))
            cv2.rectangle(overlay, (tx1, ty1), (tx2, ty2), color_bgr, 2)
            cv2.circle(overlay, (tcx, tcy), 4, color_bgr, -1)
            cv2.putText(overlay, f"{label} #{track_id} {conf:.2f}", (tx1, max(ty1 - 8, 20)), cv2.FONT_HERSHEY_SIMPLEX, 0.55, color_bgr, 2)

            if tracked_point is not None:
                marker_array.markers.extend(
                    self._build_markers(image_msg.header.frame_id, image_msg.header.stamp, marker_id, track_id, label, conf, tracked_point, color_bgr)
                )
                marker_id += 2

        self.marker_pub.publish(marker_array)
        if self.visualize:
            msg = self.bridge.cv2_to_imgmsg(overlay, encoding="bgr8")
            msg.header = image_msg.header
            self.overlay_pub.publish(msg)

    def _estimate_depth(self, depth, cx, cy, mask, x1, y1, x2, y2):
        if mask is not None:
            region = depth[mask]
        else:
            hw = 4
            region = depth[max(0, cy-hw):min(depth.shape[0], cy+hw+1), max(0, cx-hw):min(depth.shape[1], cx+hw+1)].reshape(-1)
            if region.size == 0:
                region = depth[y1:y2, x1:x2].reshape(-1)
        region = region[np.isfinite(region)]
        if region.size == 0:
            return None
        region = region.astype(np.float32) / 1000.0 if depth.dtype == np.uint16 else region.astype(np.float32)
        region = region[(region >= self.min_depth_m) & (region <= self.max_depth_m)]
        return float(np.median(region)) if region.size else None

    def _project(self, u, v, z):
        if self.camera_info_msg is None or len(self.camera_info_msg.k) < 9:
            return None
        fx, fy, cx, cy = self.camera_info_msg.k[0], self.camera_info_msg.k[4], self.camera_info_msg.k[2], self.camera_info_msg.k[5]
        if math.isclose(fx, 0.0) or math.isclose(fy, 0.0):
            return None
        return (float((u - cx) * z / fx), float((v - cy) * z / fy), float(z))

    def _build_markers(self, frame_id, stamp, marker_id, track_id, label, conf, point, color_bgr):
        r, g, b = [c / 255.0 for c in color_bgr[::-1]]
        sphere = Marker()
        sphere.header.frame_id = frame_id
        sphere.header.stamp = stamp
        sphere.ns = "detected_objects"
        sphere.id = marker_id
        sphere.type = Marker.SPHERE
        sphere.action = Marker.ADD
        sphere.pose.position.x, sphere.pose.position.y, sphere.pose.position.z = point
        sphere.pose.orientation.w = 1.0
        sphere.scale.x = sphere.scale.y = sphere.scale.z = self.marker_scale
        sphere.color.r, sphere.color.g, sphere.color.b, sphere.color.a = r, g, b, 0.9

        text = Marker()
        text.header.frame_id = frame_id
        text.header.stamp = stamp
        text.ns = "detected_object_labels"
        text.id = marker_id + 1
        text.type = Marker.TEXT_VIEW_FACING
        text.action = Marker.ADD
        text.pose.position.x, text.pose.position.y, text.pose.position.z = point[0], point[1], point[2] + self.marker_scale
        text.pose.orientation.w = 1.0
        text.scale.z = max(self.marker_scale * 0.9, 0.12)
        text.color.r = text.color.g = text.color.b = text.color.a = 1.0
        text.text = f"{label} #{track_id} {conf:.2f}"
        return [sphere, text]

    def _update_track(self, label, bbox, point, center, ts):
        best_id, best_score = None, -1.0
        for tid, tr in self.tracks.items():
            if tr.label != label:
                continue
            iou = self._bbox_iou(tr.bbox, bbox)
            dist = math.dist(tr.center, center)
            if iou < self.track_min_iou and dist > self.track_center_dist_px:
                continue
            score = iou - 0.001 * dist
            if score > best_score:
                best_id, best_score = tid, score

        if best_id is None:
            tid = self.next_track_id
            self.next_track_id += 1
            smoothed = point
        else:
            tid = best_id
            prev = self.tracks[tid]
            if point is not None and prev.point is not None:
                a = self.track_position_smoothing
                smoothed = (a*prev.point[0]+(1-a)*point[0], a*prev.point[1]+(1-a)*point[1], a*prev.point[2]+(1-a)*point[2])
            else:
                smoothed = point if point is not None else prev.point

        self.tracks[tid] = TrackState(label=label, bbox=bbox, center=center, point=smoothed, last_seen_sec=ts)
        return tid, smoothed, bbox

    def _prune_tracks(self, now_sec):
        stale = [tid for tid, tr in self.tracks.items() if (now_sec - tr.last_seen_sec) > self.track_max_age_sec]
        for tid in stale:
            self.tracks.pop(tid, None)

    @staticmethod
    def _bbox_iou(a, b):
        ax1, ay1, ax2, ay2 = a
        bx1, by1, bx2, by2 = b
        ix1, iy1, ix2, iy2 = max(ax1, bx1), max(ay1, by1), min(ax2, bx2), min(ay2, by2)
        if ix2 <= ix1 or iy2 <= iy1:
            return 0.0
        inter = float((ix2 - ix1) * (iy2 - iy1))
        ua = float((ax2 - ax1) * (ay2 - ay1))
        ub = float((bx2 - bx1) * (by2 - by1))
        return inter / max(ua + ub - inter, 1e-6)

    @staticmethod
    def _class_color(cls_id: int):
        palette = [(56, 56, 255), (151, 157, 255), (31, 112, 255), (29, 178, 255), (49, 210, 207), (10, 249, 72), (23, 204, 146), (134, 219, 61), (52, 147, 26), (187, 212, 0), (168, 153, 44), (255, 194, 0), (147, 69, 52), (255, 115, 100), (236, 24, 0), (255, 56, 132), (133, 0, 82), (255, 56, 203), (200, 149, 255), (199, 55, 255)]
        return palette[cls_id % len(palette)]

    @staticmethod
    def _blend_mask(image, mask, cls_id):
        color = np.array(ObjectSegmenterYoloV6Seg._class_color(cls_id), dtype=np.uint8)
        overlay = image.copy()
        overlay[mask] = (0.4 * overlay[mask] + 0.6 * color).astype(np.uint8)
        return overlay

    @staticmethod
    def _stamp_to_sec(stamp):
        return float(stamp.sec) + float(stamp.nanosec) * 1e-9


def main(args=None):
    rclpy.init(args=args)
    node = ObjectSegmenterYoloV6Seg()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
