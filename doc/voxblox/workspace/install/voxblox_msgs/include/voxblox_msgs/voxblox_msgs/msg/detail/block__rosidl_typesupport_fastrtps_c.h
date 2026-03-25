// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from voxblox_msgs:msg/Block.idl
// generated code does not contain a copyright notice
#ifndef VOXBLOX_MSGS__MSG__DETAIL__BLOCK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define VOXBLOX_MSGS__MSG__DETAIL__BLOCK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "voxblox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "voxblox_msgs/msg/detail/block__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
bool cdr_serialize_voxblox_msgs__msg__Block(
  const voxblox_msgs__msg__Block * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
bool cdr_deserialize_voxblox_msgs__msg__Block(
  eprosima::fastcdr::Cdr &,
  voxblox_msgs__msg__Block * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
size_t get_serialized_size_voxblox_msgs__msg__Block(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
size_t max_serialized_size_voxblox_msgs__msg__Block(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
bool cdr_serialize_key_voxblox_msgs__msg__Block(
  const voxblox_msgs__msg__Block * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
size_t get_serialized_size_key_voxblox_msgs__msg__Block(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
size_t max_serialized_size_key_voxblox_msgs__msg__Block(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_voxblox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, voxblox_msgs, msg, Block)();

#ifdef __cplusplus
}
#endif

#endif  // VOXBLOX_MSGS__MSG__DETAIL__BLOCK__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
