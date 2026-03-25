// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from voxblox_msgs:msg/MeshBlock.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "voxblox_msgs/msg/detail/mesh_block__functions.h"
#include "voxblox_msgs/msg/detail/mesh_block__struct.hpp"
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

void MeshBlock_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) voxblox_msgs::msg::MeshBlock(_init);
}

void MeshBlock_fini_function(void * message_memory)
{
  auto typed_message = static_cast<voxblox_msgs::msg::MeshBlock *>(message_memory);
  typed_message->~MeshBlock();
}

size_t size_function__MeshBlock__index(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MeshBlock__index(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshBlock__index(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshBlock__index(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__MeshBlock__index(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__MeshBlock__index(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__MeshBlock__index(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

size_t size_function__MeshBlock__x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshBlock__x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshBlock__x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshBlock__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__MeshBlock__x(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__MeshBlock__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__MeshBlock__x(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__MeshBlock__x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshBlock__y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshBlock__y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshBlock__y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshBlock__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__MeshBlock__y(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__MeshBlock__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__MeshBlock__y(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__MeshBlock__y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshBlock__z(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshBlock__z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshBlock__z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshBlock__z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__MeshBlock__z(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__MeshBlock__z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__MeshBlock__z(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__MeshBlock__z(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshBlock__r(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshBlock__r(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshBlock__r(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshBlock__r(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MeshBlock__r(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MeshBlock__r(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MeshBlock__r(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__MeshBlock__r(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshBlock__g(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshBlock__g(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshBlock__g(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshBlock__g(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MeshBlock__g(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MeshBlock__g(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MeshBlock__g(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__MeshBlock__g(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeshBlock__b(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeshBlock__b(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeshBlock__b(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeshBlock__b(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MeshBlock__b(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MeshBlock__b(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MeshBlock__b(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__MeshBlock__b(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MeshBlock_message_member_array[7] = {
  {
    "index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::MeshBlock, index),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshBlock__index,  // size() function pointer
    get_const_function__MeshBlock__index,  // get_const(index) function pointer
    get_function__MeshBlock__index,  // get(index) function pointer
    fetch_function__MeshBlock__index,  // fetch(index, &value) function pointer
    assign_function__MeshBlock__index,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::MeshBlock, x),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshBlock__x,  // size() function pointer
    get_const_function__MeshBlock__x,  // get_const(index) function pointer
    get_function__MeshBlock__x,  // get(index) function pointer
    fetch_function__MeshBlock__x,  // fetch(index, &value) function pointer
    assign_function__MeshBlock__x,  // assign(index, value) function pointer
    resize_function__MeshBlock__x  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::MeshBlock, y),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshBlock__y,  // size() function pointer
    get_const_function__MeshBlock__y,  // get_const(index) function pointer
    get_function__MeshBlock__y,  // get(index) function pointer
    fetch_function__MeshBlock__y,  // fetch(index, &value) function pointer
    assign_function__MeshBlock__y,  // assign(index, value) function pointer
    resize_function__MeshBlock__y  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::MeshBlock, z),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshBlock__z,  // size() function pointer
    get_const_function__MeshBlock__z,  // get_const(index) function pointer
    get_function__MeshBlock__z,  // get(index) function pointer
    fetch_function__MeshBlock__z,  // fetch(index, &value) function pointer
    assign_function__MeshBlock__z,  // assign(index, value) function pointer
    resize_function__MeshBlock__z  // resize(index) function pointer
  },
  {
    "r",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::MeshBlock, r),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshBlock__r,  // size() function pointer
    get_const_function__MeshBlock__r,  // get_const(index) function pointer
    get_function__MeshBlock__r,  // get(index) function pointer
    fetch_function__MeshBlock__r,  // fetch(index, &value) function pointer
    assign_function__MeshBlock__r,  // assign(index, value) function pointer
    resize_function__MeshBlock__r  // resize(index) function pointer
  },
  {
    "g",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::MeshBlock, g),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshBlock__g,  // size() function pointer
    get_const_function__MeshBlock__g,  // get_const(index) function pointer
    get_function__MeshBlock__g,  // get(index) function pointer
    fetch_function__MeshBlock__g,  // fetch(index, &value) function pointer
    assign_function__MeshBlock__g,  // assign(index, value) function pointer
    resize_function__MeshBlock__g  // resize(index) function pointer
  },
  {
    "b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(voxblox_msgs::msg::MeshBlock, b),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeshBlock__b,  // size() function pointer
    get_const_function__MeshBlock__b,  // get_const(index) function pointer
    get_function__MeshBlock__b,  // get(index) function pointer
    fetch_function__MeshBlock__b,  // fetch(index, &value) function pointer
    assign_function__MeshBlock__b,  // assign(index, value) function pointer
    resize_function__MeshBlock__b  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MeshBlock_message_members = {
  "voxblox_msgs::msg",  // message namespace
  "MeshBlock",  // message name
  7,  // number of fields
  sizeof(voxblox_msgs::msg::MeshBlock),
  false,  // has_any_key_member_
  MeshBlock_message_member_array,  // message members
  MeshBlock_init_function,  // function to initialize message memory (memory has to be allocated)
  MeshBlock_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MeshBlock_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MeshBlock_message_members,
  get_message_typesupport_handle_function,
  &voxblox_msgs__msg__MeshBlock__get_type_hash,
  &voxblox_msgs__msg__MeshBlock__get_type_description,
  &voxblox_msgs__msg__MeshBlock__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace voxblox_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<voxblox_msgs::msg::MeshBlock>()
{
  return &::voxblox_msgs::msg::rosidl_typesupport_introspection_cpp::MeshBlock_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, voxblox_msgs, msg, MeshBlock)() {
  return &::voxblox_msgs::msg::rosidl_typesupport_introspection_cpp::MeshBlock_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
