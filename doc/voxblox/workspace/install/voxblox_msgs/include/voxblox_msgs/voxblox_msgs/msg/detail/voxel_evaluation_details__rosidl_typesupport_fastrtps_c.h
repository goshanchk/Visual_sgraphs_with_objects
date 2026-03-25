// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from voxblox_msgs:msg/VoxelEvaluationDetails.idl
// generated code does not contain a copyright notice
#ifndef VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "voxblox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "voxblox_msgs/msg/detail/voxel_evaluation_details__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
bool cdr_serialize_voxblox_msgs__msg__VoxelEvaluationDetails(
  const voxblox_msgs__msg__VoxelEvaluationDetails * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
bool cdr_deserialize_voxblox_msgs__msg__VoxelEvaluationDetails(
  eprosima::fastcdr::Cdr &,
  voxblox_msgs__msg__VoxelEvaluationDetails * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
size_t get_serialized_size_voxblox_msgs__msg__VoxelEvaluationDetails(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
size_t max_serialized_size_voxblox_msgs__msg__VoxelEvaluationDetails(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
bool cdr_serialize_key_voxblox_msgs__msg__VoxelEvaluationDetails(
  const voxblox_msgs__msg__VoxelEvaluationDetails * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
size_t get_serialized_size_key_voxblox_msgs__msg__VoxelEvaluationDetails(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
size_t max_serialized_size_key_voxblox_msgs__msg__VoxelEvaluationDetails(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voxblox_msgs, msg, VoxelEvaluationDetails)();

#ifdef __cplusplus
}
#endif

#endif  // VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
