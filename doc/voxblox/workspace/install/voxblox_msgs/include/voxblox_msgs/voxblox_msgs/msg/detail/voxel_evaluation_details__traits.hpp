// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from voxblox_msgs:msg/VoxelEvaluationDetails.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/voxel_evaluation_details.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__TRAITS_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "voxblox_msgs/msg/detail/voxel_evaluation_details__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace voxblox_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VoxelEvaluationDetails & msg,
  std::ostream & out)
{
  out << "{";
  // member: max_error
  {
    out << "max_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_error, out);
    out << ", ";
  }

  // member: min_error
  {
    out << "min_error: ";
    rosidl_generator_traits::value_to_yaml(msg.min_error, out);
    out << ", ";
  }

  // member: num_evaluated_voxels
  {
    out << "num_evaluated_voxels: ";
    rosidl_generator_traits::value_to_yaml(msg.num_evaluated_voxels, out);
    out << ", ";
  }

  // member: num_ignored_voxels
  {
    out << "num_ignored_voxels: ";
    rosidl_generator_traits::value_to_yaml(msg.num_ignored_voxels, out);
    out << ", ";
  }

  // member: num_overlapping_voxels
  {
    out << "num_overlapping_voxels: ";
    rosidl_generator_traits::value_to_yaml(msg.num_overlapping_voxels, out);
    out << ", ";
  }

  // member: num_non_overlapping_voxels
  {
    out << "num_non_overlapping_voxels: ";
    rosidl_generator_traits::value_to_yaml(msg.num_non_overlapping_voxels, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoxelEvaluationDetails & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: max_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_error, out);
    out << "\n";
  }

  // member: min_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_error: ";
    rosidl_generator_traits::value_to_yaml(msg.min_error, out);
    out << "\n";
  }

  // member: num_evaluated_voxels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_evaluated_voxels: ";
    rosidl_generator_traits::value_to_yaml(msg.num_evaluated_voxels, out);
    out << "\n";
  }

  // member: num_ignored_voxels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_ignored_voxels: ";
    rosidl_generator_traits::value_to_yaml(msg.num_ignored_voxels, out);
    out << "\n";
  }

  // member: num_overlapping_voxels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_overlapping_voxels: ";
    rosidl_generator_traits::value_to_yaml(msg.num_overlapping_voxels, out);
    out << "\n";
  }

  // member: num_non_overlapping_voxels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_non_overlapping_voxels: ";
    rosidl_generator_traits::value_to_yaml(msg.num_non_overlapping_voxels, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoxelEvaluationDetails & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace voxblox_msgs

namespace rosidl_generator_traits
{

[[deprecated("use voxblox_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voxblox_msgs::msg::VoxelEvaluationDetails & msg,
  std::ostream & out, size_t indentation = 0)
{
  voxblox_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voxblox_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const voxblox_msgs::msg::VoxelEvaluationDetails & msg)
{
  return voxblox_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<voxblox_msgs::msg::VoxelEvaluationDetails>()
{
  return "voxblox_msgs::msg::VoxelEvaluationDetails";
}

template<>
inline const char * name<voxblox_msgs::msg::VoxelEvaluationDetails>()
{
  return "voxblox_msgs/msg/VoxelEvaluationDetails";
}

template<>
struct has_fixed_size<voxblox_msgs::msg::VoxelEvaluationDetails>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<voxblox_msgs::msg::VoxelEvaluationDetails>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<voxblox_msgs::msg::VoxelEvaluationDetails>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__TRAITS_HPP_
