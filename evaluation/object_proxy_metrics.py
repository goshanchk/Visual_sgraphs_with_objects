#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
import math
import os
import re
from collections import defaultdict
from dataclasses import dataclass
from statistics import mean, median
from typing import Dict, List, Sequence, Tuple

TRACK_RE = re.compile(r"^(?P<label>.+?)\s+#(?P<track_id>\d+)\s+(?P<conf>[0-9]*\.?[0-9]+)$")


@dataclass
class Detection:
    track_key: str
    confidence: float
    position: Tuple[float, float, float]


def _mean_distance_to_centroid(points: Sequence[Tuple[float, float, float]]) -> float:
    if len(points) < 2:
        return 0.0
    cx = sum(p[0] for p in points) / len(points)
    cy = sum(p[1] for p in points) / len(points)
    cz = sum(p[2] for p in points) / len(points)
    return sum(math.sqrt((p[0] - cx) ** 2 + (p[1] - cy) ** 2 + (p[2] - cz) ** 2) for p in points) / len(points)


def parse_marker_labels(marker_array_msg) -> List[Detection]:
    out: List[Detection] = []
    for marker in marker_array_msg.markers:
        if getattr(marker, "ns", "") != "detected_object_labels":
            continue
        text = (getattr(marker, "text", "") or "").strip()
        m = TRACK_RE.match(text)
        if not m:
            continue
        label = m.group("label").strip()
        track_id = int(m.group("track_id"))
        confidence = float(m.group("conf"))
        pos = marker.pose.position
        out.append(Detection(track_key=f"{label}#{track_id}", confidence=confidence, position=(float(pos.x), float(pos.y), float(pos.z))))
    return out


def compute_proxy_metrics(frames: List[List[Detection]], min_track_frames: int) -> Dict[str, float]:
    total_frames = len(frames)
    if total_frames == 0:
        return {
            "total_frames": 0,
            "active_frames": 0,
            "frame_coverage": 0.0,
            "avg_detections_per_frame": 0.0,
            "avg_detections_per_active_frame": 0.0,
            "unique_tracks": 0,
            "tracks_with_min_frames_ratio": 0.0,
            "mean_track_frames": 0.0,
            "median_track_frames": 0.0,
            "flicker_events_total": 0,
            "flicker_events_per_track": 0.0,
            "flicker_events_per_100_frames": 0.0,
            "mean_track_position_jitter_m": 0.0,
            "mean_detection_confidence": 0.0,
        }

    per_track_frames: Dict[str, List[int]] = defaultdict(list)
    per_track_positions: Dict[str, List[Tuple[float, float, float]]] = defaultdict(list)
    counts: List[int] = []
    confs: List[float] = []
    active_frames = 0

    for i, dets in enumerate(frames):
        counts.append(len(dets))
        if dets:
            active_frames += 1
        seen = set()
        for d in dets:
            confs.append(d.confidence)
            if d.track_key in seen:
                continue
            seen.add(d.track_key)
            per_track_frames[d.track_key].append(i)
            per_track_positions[d.track_key].append(d.position)

    lengths = [len(v) for v in per_track_frames.values()]
    unique_tracks = len(lengths)
    if unique_tracks == 0:
        return {
            "total_frames": total_frames,
            "active_frames": active_frames,
            "frame_coverage": active_frames / total_frames,
            "avg_detections_per_frame": mean(counts),
            "avg_detections_per_active_frame": 0.0,
            "unique_tracks": 0,
            "tracks_with_min_frames_ratio": 0.0,
            "mean_track_frames": 0.0,
            "median_track_frames": 0.0,
            "flicker_events_total": 0,
            "flicker_events_per_track": 0.0,
            "flicker_events_per_100_frames": 0.0,
            "mean_track_position_jitter_m": 0.0,
            "mean_detection_confidence": mean(confs) if confs else 0.0,
        }

    stable_tracks = sum(1 for n in lengths if n >= min_track_frames)
    flicker_total = 0
    for fr in per_track_frames.values():
        runs = 1 if fr else 0
        for j in range(1, len(fr)):
            if fr[j] != fr[j - 1] + 1:
                runs += 1
        flicker_total += max(0, runs - 1)

    jitter = [_mean_distance_to_centroid(p) for p in per_track_positions.values()]

    return {
        "total_frames": total_frames,
        "active_frames": active_frames,
        "frame_coverage": active_frames / total_frames,
        "avg_detections_per_frame": mean(counts),
        "avg_detections_per_active_frame": (sum(counts) / active_frames) if active_frames else 0.0,
        "unique_tracks": unique_tracks,
        "tracks_with_min_frames_ratio": stable_tracks / unique_tracks,
        "mean_track_frames": mean(lengths),
        "median_track_frames": median(lengths),
        "flicker_events_total": flicker_total,
        "flicker_events_per_track": flicker_total / unique_tracks,
        "flicker_events_per_100_frames": flicker_total * 100.0 / total_frames,
        "mean_track_position_jitter_m": mean(jitter) if jitter else 0.0,
        "mean_detection_confidence": mean(confs) if confs else 0.0,
    }


def load_frames_from_bag(bag_path: str, topic_name: str) -> List[List[Detection]]:
    import rosbag2_py
    from rclpy.serialization import deserialize_message
    from rosidl_runtime_py.utilities import get_message

    storage_options = rosbag2_py.StorageOptions(uri=bag_path, storage_id="")
    converter_options = rosbag2_py.ConverterOptions(input_serialization_format="cdr", output_serialization_format="cdr")
    reader = rosbag2_py.SequentialReader()
    reader.open(storage_options, converter_options)

    topic_types = {t.name: t.type for t in reader.get_all_topics_and_types()}
    if topic_name not in topic_types:
        raise RuntimeError(f"Topic '{topic_name}' not found in bag")
    msg_type = get_message(topic_types[topic_name])

    frames: List[List[Detection]] = []
    while reader.has_next():
        topic, raw_data, _ = reader.read_next()
        if topic != topic_name:
            continue
        frames.append(parse_marker_labels(deserialize_message(raw_data, msg_type)))
    return frames


def write_md(path: str, m: Dict[str, float], bag: str, topic: str, min_track_frames: int) -> None:
    lines = [
        "# Object Proxy Metrics",
        f"- Bag: `{bag}`",
        f"- Topic: `{topic}`",
        f"- Stability threshold: `{min_track_frames}` frames",
        "",
        f"- Total frames: **{m['total_frames']}**",
        f"- Active frames: **{m['active_frames']}**",
        f"- Frame coverage: **{m['frame_coverage']:.3f}**",
        f"- Avg detections/frame: **{m['avg_detections_per_frame']:.3f}**",
        f"- Avg detections/active frame: **{m['avg_detections_per_active_frame']:.3f}**",
        f"- Unique tracks: **{m['unique_tracks']}**",
        f"- Tracks >= {min_track_frames} frames: **{m['tracks_with_min_frames_ratio']:.3f}**",
        f"- Mean track frames: **{m['mean_track_frames']:.3f}**",
        f"- Median track frames: **{m['median_track_frames']:.3f}**",
        f"- Flicker events total: **{m['flicker_events_total']}**",
        f"- Flicker per track: **{m['flicker_events_per_track']:.3f}**",
        f"- Flicker per 100 frames: **{m['flicker_events_per_100_frames']:.3f}**",
        f"- Mean 3D jitter (m): **{m['mean_track_position_jitter_m']:.4f}**",
        f"- Mean confidence: **{m['mean_detection_confidence']:.3f}**",
    ]
    with open(path, "w", encoding="utf-8") as f:
        f.write("\n".join(lines) + "\n")


def main() -> None:
    p = argparse.ArgumentParser()
    p.add_argument("--bag", required=True)
    p.add_argument("--topic", default="/vs_graphs/object_markers")
    p.add_argument("--min-track-frames", type=int, default=5)
    p.add_argument("--out-json", default="")
    p.add_argument("--out-md", default="")
    a = p.parse_args()

    if not os.path.isdir(a.bag):
        raise SystemExit(f"[ERROR] Bag path is not a directory: {a.bag}")

    frames = load_frames_from_bag(a.bag, a.topic)
    metrics = compute_proxy_metrics(frames, a.min_track_frames)
    print(json.dumps(metrics, indent=2))

    if a.out_json:
        os.makedirs(os.path.dirname(a.out_json) or ".", exist_ok=True)
        with open(a.out_json, "w", encoding="utf-8") as f:
            json.dump(metrics, f, indent=2)
            f.write("\n")

    if a.out_md:
        os.makedirs(os.path.dirname(a.out_md) or ".", exist_ok=True)
        write_md(a.out_md, metrics, a.bag, a.topic, a.min_track_frames)


if __name__ == "__main__":
    main()
