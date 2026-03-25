// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from voxblox_msgs:msg/Block.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/block.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__BLOCK__STRUCT_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__BLOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__voxblox_msgs__msg__Block __attribute__((deprecated))
#else
# define DEPRECATED__voxblox_msgs__msg__Block __declspec(deprecated)
#endif

namespace voxblox_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Block_
{
  using Type = Block_<ContainerAllocator>;

  explicit Block_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_index = 0l;
      this->y_index = 0l;
      this->z_index = 0l;
    }
  }

  explicit Block_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_index = 0l;
      this->y_index = 0l;
      this->z_index = 0l;
    }
  }

  // field types and members
  using _x_index_type =
    int32_t;
  _x_index_type x_index;
  using _y_index_type =
    int32_t;
  _y_index_type y_index;
  using _z_index_type =
    int32_t;
  _z_index_type z_index;
  using _data_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__x_index(
    const int32_t & _arg)
  {
    this->x_index = _arg;
    return *this;
  }
  Type & set__y_index(
    const int32_t & _arg)
  {
    this->y_index = _arg;
    return *this;
  }
  Type & set__z_index(
    const int32_t & _arg)
  {
    this->z_index = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voxblox_msgs::msg::Block_<ContainerAllocator> *;
  using ConstRawPtr =
    const voxblox_msgs::msg::Block_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voxblox_msgs::msg::Block_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voxblox_msgs::msg::Block_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::msg::Block_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::msg::Block_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::msg::Block_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::msg::Block_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voxblox_msgs::msg::Block_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voxblox_msgs::msg::Block_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voxblox_msgs__msg__Block
    std::shared_ptr<voxblox_msgs::msg::Block_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voxblox_msgs__msg__Block
    std::shared_ptr<voxblox_msgs::msg::Block_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Block_ & other) const
  {
    if (this->x_index != other.x_index) {
      return false;
    }
    if (this->y_index != other.y_index) {
      return false;
    }
    if (this->z_index != other.z_index) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Block_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Block_

// alias to use template instance with default allocator
using Block =
  voxblox_msgs::msg::Block_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__MSG__DETAIL__BLOCK__STRUCT_HPP_
