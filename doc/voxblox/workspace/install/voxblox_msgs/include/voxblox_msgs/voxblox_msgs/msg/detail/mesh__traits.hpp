// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from voxblox_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/mesh.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "voxblox_msgs/msg/detail/mesh__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'mesh_blocks'
#include "voxblox_msgs/msg/detail/mesh_block__traits.hpp"

namespace voxblox_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mesh & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: block_edge_length
  {
    out << "block_edge_length: ";
    rosidl_generator_traits::value_to_yaml(msg.block_edge_length, out);
    out << ", ";
  }

  // member: mesh_blocks
  {
    if (msg.mesh_blocks.size() == 0) {
      out << "mesh_blocks: []";
    } else {
      out << "mesh_blocks: [";
      size_t pending_items = msg.mesh_blocks.size();
      for (auto item : msg.mesh_blocks) {
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
  const Mesh & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: block_edge_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block_edge_length: ";
    rosidl_generator_traits::value_to_yaml(msg.block_edge_length, out);
    out << "\n";
  }

  // member: mesh_blocks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mesh_blocks.size() == 0) {
      out << "mesh_blocks: []\n";
    } else {
      out << "mesh_blocks:\n";
      for (auto item : msg.mesh_blocks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mesh & msg, bool use_flow_style = false)
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
  const voxblox_msgs::msg::Mesh & msg,
  std::ostream & out, size_t indentation = 0)
{
  voxblox_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voxblox_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const voxblox_msgs::msg::Mesh & msg)
{
  return voxblox_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<voxblox_msgs::msg::Mesh>()
{
  return "voxblox_msgs::msg::Mesh";
}

template<>
inline const char * name<voxblox_msgs::msg::Mesh>()
{
  return "voxblox_msgs/msg/Mesh";
}

template<>
struct has_fixed_size<voxblox_msgs::msg::Mesh>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voxblox_msgs::msg::Mesh>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voxblox_msgs::msg::Mesh>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOXBLOX_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_
