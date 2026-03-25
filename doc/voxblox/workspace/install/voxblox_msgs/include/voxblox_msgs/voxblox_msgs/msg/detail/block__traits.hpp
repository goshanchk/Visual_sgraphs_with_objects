// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from voxblox_msgs:msg/Block.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/block.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__BLOCK__TRAITS_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__BLOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "voxblox_msgs/msg/detail/block__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace voxblox_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Block & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_index
  {
    out << "x_index: ";
    rosidl_generator_traits::value_to_yaml(msg.x_index, out);
    out << ", ";
  }

  // member: y_index
  {
    out << "y_index: ";
    rosidl_generator_traits::value_to_yaml(msg.y_index, out);
    out << ", ";
  }

  // member: z_index
  {
    out << "z_index: ";
    rosidl_generator_traits::value_to_yaml(msg.z_index, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Block & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_index: ";
    rosidl_generator_traits::value_to_yaml(msg.x_index, out);
    out << "\n";
  }

  // member: y_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_index: ";
    rosidl_generator_traits::value_to_yaml(msg.y_index, out);
    out << "\n";
  }

  // member: z_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_index: ";
    rosidl_generator_traits::value_to_yaml(msg.z_index, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Block & msg, bool use_flow_style = false)
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
  const voxblox_msgs::msg::Block & msg,
  std::ostream & out, size_t indentation = 0)
{
  voxblox_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voxblox_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const voxblox_msgs::msg::Block & msg)
{
  return voxblox_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<voxblox_msgs::msg::Block>()
{
  return "voxblox_msgs::msg::Block";
}

template<>
inline const char * name<voxblox_msgs::msg::Block>()
{
  return "voxblox_msgs/msg/Block";
}

template<>
struct has_fixed_size<voxblox_msgs::msg::Block>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voxblox_msgs::msg::Block>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voxblox_msgs::msg::Block>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOXBLOX_MSGS__MSG__DETAIL__BLOCK__TRAITS_HPP_
