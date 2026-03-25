// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from voxblox_msgs:msg/Layer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/layer.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__LAYER__TRAITS_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__LAYER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "voxblox_msgs/msg/detail/layer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'blocks'
#include "voxblox_msgs/msg/detail/block__traits.hpp"

namespace voxblox_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Layer & msg,
  std::ostream & out)
{
  out << "{";
  // member: voxel_size
  {
    out << "voxel_size: ";
    rosidl_generator_traits::value_to_yaml(msg.voxel_size, out);
    out << ", ";
  }

  // member: voxels_per_side
  {
    out << "voxels_per_side: ";
    rosidl_generator_traits::value_to_yaml(msg.voxels_per_side, out);
    out << ", ";
  }

  // member: layer_type
  {
    out << "layer_type: ";
    rosidl_generator_traits::value_to_yaml(msg.layer_type, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: blocks
  {
    if (msg.blocks.size() == 0) {
      out << "blocks: []";
    } else {
      out << "blocks: [";
      size_t pending_items = msg.blocks.size();
      for (auto item : msg.blocks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Layer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: voxel_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voxel_size: ";
    rosidl_generator_traits::value_to_yaml(msg.voxel_size, out);
    out << "\n";
  }

  // member: voxels_per_side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voxels_per_side: ";
    rosidl_generator_traits::value_to_yaml(msg.voxels_per_side, out);
    out << "\n";
  }

  // member: layer_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layer_type: ";
    rosidl_generator_traits::value_to_yaml(msg.layer_type, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: blocks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blocks.size() == 0) {
      out << "blocks: []\n";
    } else {
      out << "blocks:\n";
      for (auto item : msg.blocks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Layer & msg, bool use_flow_style = false)
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
  const voxblox_msgs::msg::Layer & msg,
  std::ostream & out, size_t indentation = 0)
{
  voxblox_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voxblox_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const voxblox_msgs::msg::Layer & msg)
{
  return voxblox_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<voxblox_msgs::msg::Layer>()
{
  return "voxblox_msgs::msg::Layer";
}

template<>
inline const char * name<voxblox_msgs::msg::Layer>()
{
  return "voxblox_msgs/msg/Layer";
}

template<>
struct has_fixed_size<voxblox_msgs::msg::Layer>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voxblox_msgs::msg::Layer>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voxblox_msgs::msg::Layer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOXBLOX_MSGS__MSG__DETAIL__LAYER__TRAITS_HPP_
