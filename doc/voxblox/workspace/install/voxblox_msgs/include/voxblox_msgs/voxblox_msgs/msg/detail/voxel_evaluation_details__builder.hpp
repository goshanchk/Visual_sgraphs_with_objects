// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from voxblox_msgs:msg/VoxelEvaluationDetails.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/voxel_evaluation_details.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__BUILDER_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "voxblox_msgs/msg/detail/voxel_evaluation_details__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace voxblox_msgs
{

namespace msg
{

namespace builder
{

class Init_VoxelEvaluationDetails_num_non_overlapping_voxels
{
public:
  explicit Init_VoxelEvaluationDetails_num_non_overlapping_voxels(::voxblox_msgs::msg::VoxelEvaluationDetails & msg)
  : msg_(msg)
  {}
  ::voxblox_msgs::msg::VoxelEvaluationDetails num_non_overlapping_voxels(::voxblox_msgs::msg::VoxelEvaluationDetails::_num_non_overlapping_voxels_type arg)
  {
    msg_.num_non_overlapping_voxels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voxblox_msgs::msg::VoxelEvaluationDetails msg_;
};

class Init_VoxelEvaluationDetails_num_overlapping_voxels
{
public:
  explicit Init_VoxelEvaluationDetails_num_overlapping_voxels(::voxblox_msgs::msg::VoxelEvaluationDetails & msg)
  : msg_(msg)
  {}
  Init_VoxelEvaluationDetails_num_non_overlapping_voxels num_overlapping_voxels(::voxblox_msgs::msg::VoxelEvaluationDetails::_num_overlapping_voxels_type arg)
  {
    msg_.num_overlapping_voxels = std::move(arg);
    return Init_VoxelEvaluationDetails_num_non_overlapping_voxels(msg_);
  }

private:
  ::voxblox_msgs::msg::VoxelEvaluationDetails msg_;
};

class Init_VoxelEvaluationDetails_num_ignored_voxels
{
public:
  explicit Init_VoxelEvaluationDetails_num_ignored_voxels(::voxblox_msgs::msg::VoxelEvaluationDetails & msg)
  : msg_(msg)
  {}
  Init_VoxelEvaluationDetails_num_overlapping_voxels num_ignored_voxels(::voxblox_msgs::msg::VoxelEvaluationDetails::_num_ignored_voxels_type arg)
  {
    msg_.num_ignored_voxels = std::move(arg);
    return Init_VoxelEvaluationDetails_num_overlapping_voxels(msg_);
  }

private:
  ::voxblox_msgs::msg::VoxelEvaluationDetails msg_;
};

class Init_VoxelEvaluationDetails_num_evaluated_voxels
{
public:
  explicit Init_VoxelEvaluationDetails_num_evaluated_voxels(::voxblox_msgs::msg::VoxelEvaluationDetails & msg)
  : msg_(msg)
  {}
  Init_VoxelEvaluationDetails_num_ignored_voxels num_evaluated_voxels(::voxblox_msgs::msg::VoxelEvaluationDetails::_num_evaluated_voxels_type arg)
  {
    msg_.num_evaluated_voxels = std::move(arg);
    return Init_VoxelEvaluationDetails_num_ignored_voxels(msg_);
  }

private:
  ::voxblox_msgs::msg::VoxelEvaluationDetails msg_;
};

class Init_VoxelEvaluationDetails_min_error
{
public:
  explicit Init_VoxelEvaluationDetails_min_error(::voxblox_msgs::msg::VoxelEvaluationDetails & msg)
  : msg_(msg)
  {}
  Init_VoxelEvaluationDetails_num_evaluated_voxels min_error(::voxblox_msgs::msg::VoxelEvaluationDetails::_min_error_type arg)
  {
    msg_.min_error = std::move(arg);
    return Init_VoxelEvaluationDetails_num_evaluated_voxels(msg_);
  }

private:
  ::voxblox_msgs::msg::VoxelEvaluationDetails msg_;
};

class Init_VoxelEvaluationDetails_max_error
{
public:
  Init_VoxelEvaluationDetails_max_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VoxelEvaluationDetails_min_error max_error(::voxblox_msgs::msg::VoxelEvaluationDetails::_max_error_type arg)
  {
    msg_.max_error = std::move(arg);
    return Init_VoxelEvaluationDetails_min_error(msg_);
  }

private:
  ::voxblox_msgs::msg::VoxelEvaluationDetails msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::voxblox_msgs::msg::VoxelEvaluationDetails>()
{
  return voxblox_msgs::msg::builder::Init_VoxelEvaluationDetails_max_error();
}

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__BUILDER_HPP_
