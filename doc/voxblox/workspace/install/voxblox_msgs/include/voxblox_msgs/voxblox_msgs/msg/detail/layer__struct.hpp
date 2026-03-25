// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from voxblox_msgs:msg/Layer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/layer.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__LAYER__STRUCT_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__LAYER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'blocks'
#include "voxblox_msgs/msg/detail/block__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__voxblox_msgs__msg__Layer __attribute__((deprecated))
#else
# define DEPRECATED__voxblox_msgs__msg__Layer __declspec(deprecated)
#endif

namespace voxblox_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Layer_
{
  using Type = Layer_<ContainerAllocator>;

  explicit Layer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voxel_size = 0.0;
      this->voxels_per_side = 0ul;
      this->layer_type = "";
      this->action = 0;
    }
  }

  explicit Layer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : layer_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voxel_size = 0.0;
      this->voxels_per_side = 0ul;
      this->layer_type = "";
      this->action = 0;
    }
  }

  // field types and members
  using _voxel_size_type =
    double;
  _voxel_size_type voxel_size;
  using _voxels_per_side_type =
    uint32_t;
  _voxels_per_side_type voxels_per_side;
  using _layer_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _layer_type_type layer_type;
  using _action_type =
    uint8_t;
  _action_type action;
  using _blocks_type =
    std::vector<voxblox_msgs::msg::Block_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voxblox_msgs::msg::Block_<ContainerAllocator>>>;
  _blocks_type blocks;

  // setters for named parameter idiom
  Type & set__voxel_size(
    const double & _arg)
  {
    this->voxel_size = _arg;
    return *this;
  }
  Type & set__voxels_per_side(
    const uint32_t & _arg)
  {
    this->voxels_per_side = _arg;
    return *this;
  }
  Type & set__layer_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->layer_type = _arg;
    return *this;
  }
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__blocks(
    const std::vector<voxblox_msgs::msg::Block_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voxblox_msgs::msg::Block_<ContainerAllocator>>> & _arg)
  {
    this->blocks = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ACTION_UPDATE =
    0u;
  static constexpr uint8_t ACTION_MERGE =
    1u;
  static constexpr uint8_t ACTION_RESET =
    2u;

  // pointer types
  using RawPtr =
    voxblox_msgs::msg::Layer_<ContainerAllocator> *;
  using ConstRawPtr =
    const voxblox_msgs::msg::Layer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voxblox_msgs::msg::Layer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voxblox_msgs::msg::Layer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::msg::Layer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::msg::Layer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::msg::Layer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::msg::Layer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voxblox_msgs::msg::Layer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voxblox_msgs::msg::Layer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voxblox_msgs__msg__Layer
    std::shared_ptr<voxblox_msgs::msg::Layer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voxblox_msgs__msg__Layer
    std::shared_ptr<voxblox_msgs::msg::Layer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Layer_ & other) const
  {
    if (this->voxel_size != other.voxel_size) {
      return false;
    }
    if (this->voxels_per_side != other.voxels_per_side) {
      return false;
    }
    if (this->layer_type != other.layer_type) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->blocks != other.blocks) {
      return false;
    }
    return true;
  }
  bool operator!=(const Layer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Layer_

// alias to use template instance with default allocator
using Layer =
  voxblox_msgs::msg::Layer_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Layer_<ContainerAllocator>::ACTION_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Layer_<ContainerAllocator>::ACTION_MERGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Layer_<ContainerAllocator>::ACTION_RESET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__MSG__DETAIL__LAYER__STRUCT_HPP_
