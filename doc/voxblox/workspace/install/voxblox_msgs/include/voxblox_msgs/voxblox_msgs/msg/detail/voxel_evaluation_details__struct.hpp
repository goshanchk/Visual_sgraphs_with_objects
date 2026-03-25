// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from voxblox_msgs:msg/VoxelEvaluationDetails.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/voxel_evaluation_details.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__STRUCT_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__voxblox_msgs__msg__VoxelEvaluationDetails __attribute__((deprecated))
#else
# define DEPRECATED__voxblox_msgs__msg__VoxelEvaluationDetails __declspec(deprecated)
#endif

namespace voxblox_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VoxelEvaluationDetails_
{
  using Type = VoxelEvaluationDetails_<ContainerAllocator>;

  explicit VoxelEvaluationDetails_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_error = 0.0;
      this->min_error = 0.0;
      this->num_evaluated_voxels = 0ul;
      this->num_ignored_voxels = 0ul;
      this->num_overlapping_voxels = 0ul;
      this->num_non_overlapping_voxels = 0ul;
    }
  }

  explicit VoxelEvaluationDetails_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_error = 0.0;
      this->min_error = 0.0;
      this->num_evaluated_voxels = 0ul;
      this->num_ignored_voxels = 0ul;
      this->num_overlapping_voxels = 0ul;
      this->num_non_overlapping_voxels = 0ul;
    }
  }

  // field types and members
  using _max_error_type =
    double;
  _max_error_type max_error;
  using _min_error_type =
    double;
  _min_error_type min_error;
  using _num_evaluated_voxels_type =
    uint32_t;
  _num_evaluated_voxels_type num_evaluated_voxels;
  using _num_ignored_voxels_type =
    uint32_t;
  _num_ignored_voxels_type num_ignored_voxels;
  using _num_overlapping_voxels_type =
    uint32_t;
  _num_overlapping_voxels_type num_overlapping_voxels;
  using _num_non_overlapping_voxels_type =
    uint32_t;
  _num_non_overlapping_voxels_type num_non_overlapping_voxels;

  // setters for named parameter idiom
  Type & set__max_error(
    const double & _arg)
  {
    this->max_error = _arg;
    return *this;
  }
  Type & set__min_error(
    const double & _arg)
  {
    this->min_error = _arg;
    return *this;
  }
  Type & set__num_evaluated_voxels(
    const uint32_t & _arg)
  {
    this->num_evaluated_voxels = _arg;
    return *this;
  }
  Type & set__num_ignored_voxels(
    const uint32_t & _arg)
  {
    this->num_ignored_voxels = _arg;
    return *this;
  }
  Type & set__num_overlapping_voxels(
    const uint32_t & _arg)
  {
    this->num_overlapping_voxels = _arg;
    return *this;
  }
  Type & set__num_non_overlapping_voxels(
    const uint32_t & _arg)
  {
    this->num_non_overlapping_voxels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator> *;
  using ConstRawPtr =
    const voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voxblox_msgs__msg__VoxelEvaluationDetails
    std::shared_ptr<voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voxblox_msgs__msg__VoxelEvaluationDetails
    std::shared_ptr<voxblox_msgs::msg::VoxelEvaluationDetails_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoxelEvaluationDetails_ & other) const
  {
    if (this->max_error != other.max_error) {
      return false;
    }
    if (this->min_error != other.min_error) {
      return false;
    }
    if (this->num_evaluated_voxels != other.num_evaluated_voxels) {
      return false;
    }
    if (this->num_ignored_voxels != other.num_ignored_voxels) {
      return false;
    }
    if (this->num_overlapping_voxels != other.num_overlapping_voxels) {
      return false;
    }
    if (this->num_non_overlapping_voxels != other.num_non_overlapping_voxels) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoxelEvaluationDetails_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoxelEvaluationDetails_

// alias to use template instance with default allocator
using VoxelEvaluationDetails =
  voxblox_msgs::msg::VoxelEvaluationDetails_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__STRUCT_HPP_
