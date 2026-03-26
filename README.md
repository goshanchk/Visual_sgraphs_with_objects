# Visual S-Graphs with Objects

Visual S-Graphs pipeline for RGB-D SLAM, semantic scene understanding and optional object segmentation.

---

## Project Scope

This repository is used for:

- RGB-D SLAM on TUM RGB-D data
- Semantic scene segmentation (YOSO)
- Optional object segmentation (`off` / YOLOv8-seg / Mask R-CNN / YOLOv6-seg in scripts folder)
- Trajectory and object-level evaluation

---

## Docker Runtime

A dedicated Docker environment was created for reproducible execution (ROS 2 Jazzy + dependencies).

Main files:
- `docker/Jazzy.Dockerfile`
- `Dependencies.md`

Typical workflow:
1. Build Docker image.
2. Run container with mounted workspace.
3. Build `vs_graphs` with `colcon`.
4. Launch SLAM and play bag inside the same container.

---

## Repository Structure

```
config/         # Runtime configs
launch/         # ROS2 launch files
src/            # Core C++ source
include/        # Core C++ headers
scripts/        # Runtime Python nodes
evaluation/     # Metrics scripts
data/           # Local only 
models/         # Local only
results/        # Local only 
```

---

## Dataset — TUM RGB-D

Downloads:
- [freiburg3_long_office_household](https://cvg.cit.tum.de/data/datasets/rgbd-dataset/download#freiburg3_long_office_household)
- [freiburg2_large_no_loop](https://cvg.cit.tum.de/data/datasets/rgbd-dataset/download#freiburg2_large_no_loop)
```

---

## ROS1 bag → ROS2 bag Conversion

```bash
rosbags-convert \
  --src /path/to/rgbd_dataset_freiburg1_xyz.bag \
  --dst /path/to/rgbd_dataset_freiburg1_xyz_ros2 \
  --dst-storage sqlite3 \
  --src-typestore ros1_noetic \
  --dst-typestore ros2_jazzy
```

---

## Build (inside container)

```bash
cd /home/user/workspace
source /opt/ros/jazzy/setup.bash
colcon build --packages-select vs_graphs --symlink-install
source install/setup.bash
```

---

## Run SLAM (`rgbd.launch.py`)

### A) Without object segmentation

```bash
ros2 launch vs_graphs rgbd.launch.py \
  offline:=true \
  launch_rviz:=true \
  sensor_config:=TUM1 \
  camera_frame:=kinect \
  rgb_image_topic:=/camera/rgb/image_color \
  rgb_camera_info_topic:=/camera/rgb/camera_info \
  depth_image_topic:=/camera/depth/image \
  semantic_scene_segmenter:=yoso \
  object_segmenter:=off
```

### B) With YOLO object segmentation

```bash
ros2 launch vs_graphs rgbd.launch.py \
  offline:=true \
  launch_rviz:=true \
  sensor_config:=TUM1 \
  camera_frame:=kinect \
  rgb_image_topic:=/camera/rgb/image_color \
  rgb_camera_info_topic:=/camera/rgb/camera_info \
  depth_image_topic:=/camera/depth/image \
  semantic_scene_segmenter:=yoso \
  object_segmenter:=yolo \
  object_model_file:=yolov8n-seg.pt
```

---

## Play Dataset Bag

Run in a second terminal (same container):

```bash
ros2 bag play /home/user/data_bag/rgbd_dataset_freiburg1_xyz_ros2 --clock -r 0.5
```

---

## Evaluation

### APE / RPE (EVO)

```bash
bash evaluation/eval_tum_evo.sh \
  --gt data/tum/fr1_xyz/gt/household.txt \
  --est results/traj/est_household.tum \
  --out results/metrics/household
```

> Metrics are computed after SE(3) alignment (rotation + translation).
> APE measures global absolute trajectory drift.
> RPE measures local relative drift for a selected delta (1 meter).

### Object Proxy Metrics (no GT data)

```bash
bash evaluation/eval_object_proxy.sh \
  --bag /home/user/workspace/results/runs/household_eval \
  --out /home/user/workspace/results/metrics/household_objects_proxy
```

### Object Detection Mini Test

```bash
bash evaluation/eval_yolo_coco.sh --model yolov8n-seg.pt
```
