// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from voxblox_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/mesh.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__MESH__STRUCT_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__MESH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'mesh_blocks'
#include "voxblox_msgs/msg/detail/mesh_block__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__voxblox_msgs__msg__Mesh __attribute__((deprecated))
#else
# define DEPRECATED__voxblox_msgs__msg__Mesh __declspec(deprecated)
#endif

namespace voxblox_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mesh_
{
  using Type = Mesh_<ContainerAllocator>;

  explicit Mesh_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->block_edge_length = 0.0f;
    }
  }

  explicit Mesh_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->block_edge_length = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _block_edge_length_type =
    float;
  _block_edge_length_type block_edge_length;
  using _mesh_blocks_type =
    std::vector<voxblox_msgs::msg::MeshBlock_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voxblox_msgs::msg::MeshBlock_<ContainerAllocator>>>;
  _mesh_blocks_type mesh_blocks;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__block_edge_length(
    const float & _arg)
  {
    this->block_edge_length = _arg;
    return *this;
  }
  Type & set__mesh_blocks(
    const std::vector<voxblox_msgs::msg::MeshBlock_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voxblox_msgs::msg::MeshBlock_<ContainerAllocator>>> & _arg)
  {
    this->mesh_blocks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voxblox_msgs::msg::Mesh_<ContainerAllocator> *;
  using ConstRawPtr =
    const voxblox_msgs::msg::Mesh_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voxblox_msgs::msg::Mesh_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voxblox_msgs::msg::Mesh_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::msg::Mesh_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::msg::Mesh_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::msg::Mesh_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::msg::Mesh_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voxblox_msgs::msg::Mesh_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voxblox_msgs::msg::Mesh_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voxblox_msgs__msg__Mesh
    std::shared_ptr<voxblox_msgs::msg::Mesh_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voxblox_msgs__msg__Mesh
    std::shared_ptr<voxblox_msgs::msg::Mesh_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mesh_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->block_edge_length != other.block_edge_length) {
      return false;
    }
    if (this->mesh_blocks != other.mesh_blocks) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mesh_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mesh_

// alias to use template instance with default allocator
using Mesh =
  voxblox_msgs::msg::Mesh_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__MSG__DETAIL__MESH__STRUCT_HPP_
