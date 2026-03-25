// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from voxblox_msgs:msg/VoxelEvaluationDetails.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "voxblox_msgs/msg/detail/voxel_evaluation_details__functions.h"
#include "voxblox_msgs/msg/detail/voxel_evaluation_details__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace voxblox_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VoxelEvaluationDetails_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) voxblox_msgs::msg::VoxelEvaluationDetails(_init);
}

void VoxelEvaluationDetails_fini_function(void * message_memory)
{
  auto typed_message = static_cast<voxblox_msgs::msg::VoxelEvaluationDetails *>(message_memory);
  typed_message->~VoxelEvaluationDetails();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VoxelEvaluationDetails_message_member_array[6] = {
  {
    "max_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::VoxelEvaluationDetails, max_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::VoxelEvaluationDetails, min_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_evaluated_voxels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::VoxelEvaluationDetails, num_evaluated_voxels),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_ignored_voxels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::VoxelEvaluationDetails, num_ignored_voxels),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_overlapping_voxels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::VoxelEvaluationDetails, num_overlapping_voxels),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_non_overlapping_voxels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::VoxelEvaluationDetails, num_non_overlapping_voxels),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VoxelEvaluationDetails_message_members = {
  "voxblox_msgs::msg",  // message namespace
  "VoxelEvaluationDetails",  // message name
  6,  // number of fields
  sizeof(voxblox_msgs::msg::VoxelEvaluationDetails),
  false,  // has_any_key_member_
  VoxelEvaluationDetails_message_member_array,  // message members
  VoxelEvaluationDetails_init_function,  // function to initialize message memory (memory has to be allocated)
  VoxelEvaluationDetails_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VoxelEvaluationDetails_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VoxelEvaluationDetails_message_members,
  get_message_typesupport_handle_function,
  &voxblox_msgs__msg__VoxelEvaluationDetails__get_type_hash,
  &voxblox_msgs__msg__VoxelEvaluationDetails__get_type_description,
  &voxblox_msgs__msg__VoxelEvaluationDetails__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace voxblox_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<voxblox_msgs::msg::VoxelEvaluationDetails>()
{
  return &::voxblox_msgs::msg::rosidl_typesupport_introspection_cpp::VoxelEvaluationDetails_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, voxblox_msgs, msg, VoxelEvaluationDetails)() {
  return &::voxblox_msgs::msg::rosidl_typesupport_introspection_cpp::VoxelEvaluationDetails_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
