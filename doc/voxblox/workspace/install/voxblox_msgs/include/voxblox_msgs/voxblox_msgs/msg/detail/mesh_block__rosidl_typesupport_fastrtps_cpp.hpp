// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from voxblox_msgs:msg/MeshBlock.idl
// generated code does not contain a copyright notice

#ifndef VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "voxblox_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "voxblox_msgs/msg/detail/mesh_block__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace voxblox_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voxblox_msgs
cdr_serialize(
  const voxblox_msgs::msg::MeshBlock & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voxblox_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  voxblox_msgs::msg::MeshBlock & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voxblox_msgs
get_serialized_size(
  const voxblox_msgs::msg::MeshBlock & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voxblox_msgs
max_serialized_size_MeshBlock(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voxblox_msgs
cdr_serialize_key(
  const voxblox_msgs::msg::MeshBlock & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voxblox_msgs
get_serialized_size_key(
  const voxblox_msgs::msg::MeshBlock & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voxblox_msgs
max_serialized_size_key_MeshBlock(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace voxblox_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_voxblox_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, voxblox_msgs, msg, MeshBlock)();

#ifdef __cplusplus
}
#endif

#endif  // VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
