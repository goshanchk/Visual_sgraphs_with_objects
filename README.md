```bash
rosbags-convert \
  --src /media/imit-learn/ISR_2T2/Perception_vS-Graphs/rgbd_dataset_freiburg1_xyz.bag \
  --dst /media/imit-learn/ISR_2T2/Perception_vS-Graphs/rgbd_dataset_freiburg1_xyz_ros2 \
  --dst-storage sqlite3 \
  --src-typestore ros1_noetic \
  --dst-typestore ros2_jazzy
```

```bash
export DISPLAY=:1
source /opt/ros/jazzy/setup.bash
source ~/workspace/install/setup.bash

ros2 bag play /home/user/data_bag/rgbd_dataset_freiburg1_xyz_ros2 --clock -r 0.7 -l
```

```bash
ros2 launch vs_graphs rgbd.launch.py   offline:=true   launch_rviz:=true   sensor_config:=TUM1   camera_frame:=kinect   rgb_image_topic:=/camera/rgb/image_color   depth_image_topic:=/camera/depth/image   rgb_camera_info_topic:=/camera/rgb/camera_info
```