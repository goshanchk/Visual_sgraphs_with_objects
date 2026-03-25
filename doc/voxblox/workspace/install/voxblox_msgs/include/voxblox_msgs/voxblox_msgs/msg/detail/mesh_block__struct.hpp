// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from voxblox_msgs:msg/MeshBlock.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/mesh_block.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__STRUCT_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__voxblox_msgs__msg__MeshBlock __attribute__((deprecated))
#else
# define DEPRECATED__voxblox_msgs__msg__MeshBlock __declspec(deprecated)
#endif

namespace voxblox_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MeshBlock_
{
  using Type = MeshBlock_<ContainerAllocator>;

  explicit MeshBlock_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int64_t, 3>::iterator, int64_t>(this->index.begin(), this->index.end(), 0ll);
    }
  }

  explicit MeshBlock_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : index(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int64_t, 3>::iterator, int64_t>(this->index.begin(), this->index.end(), 0ll);
    }
  }

  // field types and members
  using _index_type =
    std::array<int64_t, 3>;
  _index_type index;
  using _x_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _x_type x;
  using _y_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _y_type y;
  using _z_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _z_type z;
  using _r_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _r_type r;
  using _g_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _g_type g;
  using _b_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _b_type b;

  // setters for named parameter idiom
  Type & set__index(
    const std::array<int64_t, 3> & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__x(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__r(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voxblox_msgs::msg::MeshBlock_<ContainerAllocator> *;
  using ConstRawPtr =
    const voxblox_msgs::msg::MeshBlock_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voxblox_msgs::msg::MeshBlock_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voxblox_msgs::msg::MeshBlock_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::msg::MeshBlock_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::msg::MeshBlock_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::msg::MeshBlock_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::msg::MeshBlock_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voxblox_msgs::msg::MeshBlock_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voxblox_msgs::msg::MeshBlock_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voxblox_msgs__msg__MeshBlock
    std::shared_ptr<voxblox_msgs::msg::MeshBlock_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voxblox_msgs__msg__MeshBlock
    std::shared_ptr<voxblox_msgs::msg::MeshBlock_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MeshBlock_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeshBlock_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MeshBlock_

// alias to use template instance with default allocator
using MeshBlock =
  voxblox_msgs::msg::MeshBlock_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__STRUCT_HPP_
