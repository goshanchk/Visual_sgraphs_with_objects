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
except ImportError:  # pragma: no cover
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


class ObjectSegmenterYolo(Node):
    def __init__(self) -> None:
        super().__init__("object_segmenter_yolo")
        self.bridge = CvBridge()
        self.camera_info_msg: Optional[CameraInfo] = None
        self.model = None
        self._warned_missing_camera_info = False
        self.tracks: Dict[int, "TrackState"] = {}
        self.next_track_id = 0

        self.declare_parameter("model_path", "yolov8n-seg.pt")
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
        self.declare_parameter(
            "allowed_classes",
            ["person", "chair", "couch", "bed", "dining table", "tv", "laptop", "bottle", "cup", "book", "backpack", "potted plant", "bench"],
        )

        self.visualize = self.get_parameter("visualize").value
        self.use_masks = self.get_parameter("use_masks").value
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
            self.get_logger().error("ultralytics is not installed. Install it in the container to enable YOLO object segmentation.")
            return

        try:
            if torch is not None and hasattr(torch.serialization, "add_safe_globals"):
                safe_globals = [
                    model_type
                    for model_type in (SegmentationModel, DetectionModel, PoseModel, ClassificationModel)
                    if model_type is not None
                ]
                if safe_globals:
                    torch.serialization.add_safe_globals(safe_globals)
            self.model = YOLO(self.model_path)
            self.get_logger().info(f"Loaded YOLO model: {self.model_path}")
        except Exception as exc:  # pragma: no cover
            self.get_logger().error(f"Failed to load YOLO model '{self.model_path}': {exc}")
            self.model = None

    def _synced_cb(self, image_msg: Image, depth_msg: Image) -> None:
        try:
            if self.model is None:
                return
            if self.camera_info_msg is None:
                if not self._warned_missing_camera_info:
                    self.get_logger().warn("Waiting for camera_info before projecting detections into 3D.")
                    self._warned_missing_camera_info = True
                return

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
            self.get_logger().error(f"Object segmentation callback failed: {exc}")
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

            confidence = float(box.conf.item())
            x1, y1, x2, y2 = [int(v) for v in box.xyxy[0].tolist()]
            x1 = max(0, min(x1, color.shape[1] - 1))
            x2 = max(0, min(x2, color.shape[1] - 1))
            y1 = max(0, min(y1, color.shape[0] - 1))
            y2 = max(0, min(y2, color.shape[0] - 1))
            if x2 <= x1 or y2 <= y1:
                continue

            mask = None
            center_x = (x1 + x2) // 2
            center_y = (y1 + y2) // 2
            if masks is not None and idx < len(masks):
                mask = masks[idx]
                if mask.shape[:2] != color.shape[:2]:
                    mask = cv2.resize(mask, (color.shape[1], color.shape[0]), interpolation=cv2.INTER_LINEAR)
                mask = mask > 0.5
                ys, xs = np.nonzero(mask)
                if xs.size > 0:
                    center_x = int(np.median(xs))
                    center_y = int(np.median(ys))

            depth_m = self._estimate_depth(depth, center_x, center_y, mask, x1, y1, x2, y2)
            point = self._project(center_x, center_y, depth_m) if depth_m is not None else None

            track_id, tracked_point, tracked_bbox = self._update_track(
                label=label,
                bbox=(x1, y1, x2, y2),
                point=point,
                center=(center_x, center_y),
                timestamp_sec=now_sec,
            )

            color_bgr = self._class_color(cls_id)
            if mask is not None:
                overlay = self._blend_mask(overlay, mask, cls_id)
            tx1, ty1, tx2, ty2 = tracked_bbox
            tcenter_x = int(round((tx1 + tx2) / 2.0))
            tcenter_y = int(round((ty1 + ty2) / 2.0))
            cv2.rectangle(overlay, (tx1, ty1), (tx2, ty2), color_bgr, 2)
            cv2.circle(overlay, (tcenter_x, tcenter_y), 4, color_bgr, -1)
            cv2.putText(
                overlay,
                f"{label} #{track_id} {confidence:.2f}",
                (tx1, max(ty1 - 8, 20)),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.55,
                color_bgr,
                2,
            )

            if tracked_point is not None:
                marker_array.markers.extend(
                    self._build_markers(
                        image_msg.header.frame_id,
                        image_msg.header.stamp,
                        marker_id,
                        track_id,
                        label,
                        confidence,
                        tracked_point,
                        color_bgr,
                    )
                )
                marker_id += 2

        self.marker_pub.publish(marker_array)

        if self.visualize:
            overlay_msg = self.bridge.cv2_to_imgmsg(overlay, encoding="bgr8")
            overlay_msg.header = image_msg.header
            self.overlay_pub.publish(overlay_msg)

    def _estimate_depth(self, depth: np.ndarray, cx: int, cy: int, mask: Optional[np.ndarray], x1: int, y1: int, x2: int, y2: int) -> Optional[float]:
        if mask is not None:
            region = depth[mask]
        else:
            half_window = 4
            region = depth[max(0, cy - half_window):min(depth.shape[0], cy + half_window + 1), max(0, cx - half_window):min(depth.shape[1], cx + half_window + 1)].reshape(-1)
            if region.size == 0:
                region = depth[y1:y2, x1:x2].reshape(-1)

        region = region[np.isfinite(region)]
        if region.size == 0:
            return None

        if depth.dtype == np.uint16:
            region = region.astype(np.float32) / 1000.0
        else:
            region = region.astype(np.float32)

        region = region[(region >= self.min_depth_m) & (region <= self.max_depth_m)]
        if region.size == 0:
            return None

        return float(np.median(region))

    def _project(self, u: int, v: int, depth_m: float) -> Optional[Sequence[float]]:
        if self.camera_info_msg is None or len(self.camera_info_msg.k) < 9:
            return None
        fx = self.camera_info_msg.k[0]
        fy = self.camera_info_msg.k[4]
        cx = self.camera_info_msg.k[2]
        cy = self.camera_info_msg.k[5]
        if math.isclose(fx, 0.0) or math.isclose(fy, 0.0):
            return None

        x = (u - cx) * depth_m / fx
        y = (v - cy) * depth_m / fy
        z = depth_m
        return (float(x), float(y), float(z))

    def _build_markers(
        self,
        frame_id: str,
        stamp,
        marker_id: int,
        track_id: int,
        label: str,
        confidence: float,
        point: Sequence[float],
        color_bgr,
    ) -> Sequence[Marker]:
        r, g, b = [channel / 255.0 for channel in color_bgr[::-1]]

        sphere = Marker()
        sphere.header.frame_id = frame_id
        sphere.header.stamp = stamp
        sphere.ns = "detected_objects"
        sphere.id = marker_id
        sphere.type = Marker.SPHERE
        sphere.action = Marker.ADD
        sphere.pose.position.x = point[0]
        sphere.pose.position.y = point[1]
        sphere.pose.position.z = point[2]
        sphere.pose.orientation.w = 1.0
        sphere.scale.x = self.marker_scale
        sphere.scale.y = self.marker_scale
        sphere.scale.z = self.marker_scale
        sphere.color.r = r
        sphere.color.g = g
        sphere.color.b = b
        sphere.color.a = 0.9

        text = Marker()
        text.header.frame_id = frame_id
        text.header.stamp = stamp
        text.ns = "detected_object_labels"
        text.id = marker_id + 1
        text.type = Marker.TEXT_VIEW_FACING
        text.action = Marker.ADD
        text.pose.position.x = point[0]
        text.pose.position.y = point[1]
        text.pose.position.z = point[2] + self.marker_scale
        text.pose.orientation.w = 1.0
        text.scale.z = max(self.marker_scale * 0.9, 0.12)
        text.color.r = 1.0
        text.color.g = 1.0
        text.color.b = 1.0
        text.color.a = 0.95
        text.text = f"{label} #{track_id} {confidence:.2f}"

        return [sphere, text]

    def _update_track(
        self,
        label: str,
        bbox: Tuple[int, int, int, int],
        point: Optional[Sequence[float]],
        center: Tuple[int, int],
        timestamp_sec: float,
    ) -> Tuple[int, Optional[Tuple[float, float, float]], Tuple[int, int, int, int]]:
        best_track_id = None
        best_score = -1.0

        for track_id, track in self.tracks.items():
            if track.label != label:
                continue
            iou = self._bbox_iou(track.bbox, bbox)
            center_dist = math.dist(track.center, center)
            if iou < self.track_min_iou and center_dist > self.track_center_dist_px:
                continue
            score = iou - 0.002 * center_dist
            if score > best_score:
                best_score = score
                best_track_id = track_id

        if best_track_id is None:
            track_id = self.next_track_id
            self.next_track_id += 1
            tracked_bbox = bbox
            tracked_point = None if point is None else (float(point[0]), float(point[1]), float(point[2]))
            self.tracks[track_id] = TrackState(
                label=label,
                bbox=tracked_bbox,
                center=center,
                point=tracked_point,
                last_seen_sec=timestamp_sec,
            )
            return track_id, tracked_point, tracked_bbox

        track = self.tracks[best_track_id]
        alpha = self.track_position_smoothing
        tracked_point = track.point
        if point is not None:
            current_point = (float(point[0]), float(point[1]), float(point[2]))
            if track.point is None:
                tracked_point = current_point
            else:
                tracked_point = (
                    alpha * track.point[0] + (1.0 - alpha) * current_point[0],
                    alpha * track.point[1] + (1.0 - alpha) * current_point[1],
                    alpha * track.point[2] + (1.0 - alpha) * current_point[2],
                )
        tracked_bbox = (
            int(round(alpha * track.bbox[0] + (1.0 - alpha) * bbox[0])),
            int(round(alpha * track.bbox[1] + (1.0 - alpha) * bbox[1])),
            int(round(alpha * track.bbox[2] + (1.0 - alpha) * bbox[2])),
            int(round(alpha * track.bbox[3] + (1.0 - alpha) * bbox[3])),
        )
        tracked_center = (
            int(round((tracked_bbox[0] + tracked_bbox[2]) / 2.0)),
            int(round((tracked_bbox[1] + tracked_bbox[3]) / 2.0)),
        )
        track.bbox = tracked_bbox
        track.center = tracked_center
        track.point = tracked_point
        track.last_seen_sec = timestamp_sec
        return best_track_id, tracked_point, tracked_bbox

    def _prune_tracks(self, timestamp_sec: float) -> None:
        stale_track_ids = [
            track_id
            for track_id, track in self.tracks.items()
            if timestamp_sec - track.last_seen_sec > self.track_max_age_sec
        ]
        for track_id in stale_track_ids:
            del self.tracks[track_id]

    @staticmethod
    def _bbox_iou(box_a: Tuple[int, int, int, int], box_b: Tuple[int, int, int, int]) -> float:
        ax1, ay1, ax2, ay2 = box_a
        bx1, by1, bx2, by2 = box_b
        inter_x1 = max(ax1, bx1)
        inter_y1 = max(ay1, by1)
        inter_x2 = min(ax2, bx2)
        inter_y2 = min(ay2, by2)
        if inter_x2 <= inter_x1 or inter_y2 <= inter_y1:
            return 0.0
        inter_area = float((inter_x2 - inter_x1) * (inter_y2 - inter_y1))
        area_a = float(max(0, ax2 - ax1) * max(0, ay2 - ay1))
        area_b = float(max(0, bx2 - bx1) * max(0, by2 - by1))
        union = area_a + area_b - inter_area
        if union <= 0.0:
            return 0.0
        return inter_area / union

    @staticmethod
    def _stamp_to_sec(stamp) -> float:
        return float(stamp.sec) + float(stamp.nanosec) * 1e-9

    @staticmethod
    def _class_color(cls_id: int):
        palette = [
            (56, 56, 255),
            (151, 157, 255),
            (31, 112, 255),
            (29, 178, 255),
            (49, 210, 207),
            (10, 249, 72),
            (23, 204, 146),
            (134, 219, 61),
            (52, 147, 26),
            (187, 212, 0),
        ]
        return palette[cls_id % len(palette)]

    def _blend_mask(self, image: np.ndarray, mask: np.ndarray, cls_id: int) -> np.ndarray:
        color = np.array(self._class_color(cls_id), dtype=np.float32)
        image_float = image.astype(np.float32)
        image_float[mask] = image_float[mask] * 0.55 + color * 0.45
        return image_float.astype(np.uint8)


def main(args=None) -> None:
    rclpy.init(args=args)
    node = ObjectSegmenterYolo()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
