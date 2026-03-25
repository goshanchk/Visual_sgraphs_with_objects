// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from voxblox_msgs:msg/MeshBlock.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/mesh_block.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__TRAITS_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "voxblox_msgs/msg/detail/mesh_block__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace voxblox_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MeshBlock & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    if (msg.index.size() == 0) {
      out << "index: []";
    } else {
      out << "index: [";
      size_t pending_items = msg.index.size();
      for (auto item : msg.index) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x
  {
    if (msg.x.size() == 0) {
      out << "x: []";
    } else {
      out << "x: [";
      size_t pending_items = msg.x.size();
      for (auto item : msg.x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y
  {
    if (msg.y.size() == 0) {
      out << "y: []";
    } else {
      out << "y: [";
      size_t pending_items = msg.y.size();
      for (auto item : msg.y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: z
  {
    if (msg.z.size() == 0) {
      out << "z: []";
    } else {
      out << "z: [";
      size_t pending_items = msg.z.size();
      for (auto item : msg.z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: r
  {
    if (msg.r.size() == 0) {
      out << "r: []";
    } else {
      out << "r: [";
      size_t pending_items = msg.r.size();
      for (auto item : msg.r) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: g
  {
    if (msg.g.size() == 0) {
      out << "g: []";
    } else {
      out << "g: [";
      size_t pending_items = msg.g.size();
      for (auto item : msg.g) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: b
  {
    if (msg.b.size() == 0) {
      out << "b: []";
    } else {
      out << "b: [";
      size_t pending_items = msg.b.size();
      for (auto item : msg.b) {
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
  const MeshBlock & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.index.size() == 0) {
      out << "index: []\n";
    } else {
      out << "index:\n";
      for (auto item : msg.index) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.z.size() == 0) {
      out << "z: []\n";
    } else {
      out << "z:\n";
      for (auto item : msg.z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.r.size() == 0) {
      out << "r: []\n";
    } else {
      out << "r:\n";
      for (auto item : msg.r) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.g.size() == 0) {
      out << "g: []\n";
    } else {
      out << "g:\n";
      for (auto item : msg.g) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.b.size() == 0) {
      out << "b: []\n";
    } else {
      out << "b:\n";
      for (auto item : msg.b) {
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

inline std::string to_yaml(const MeshBlock & msg, bool use_flow_style = false)
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
  const voxblox_msgs::msg::MeshBlock & msg,
  std::ostream & out, size_t indentation = 0)
{
  voxblox_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voxblox_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const voxblox_msgs::msg::MeshBlock & msg)
{
  return voxblox_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<voxblox_msgs::msg::MeshBlock>()
{
  return "voxblox_msgs::msg::MeshBlock";
}

template<>
inline const char * name<voxblox_msgs::msg::MeshBlock>()
{
  return "voxblox_msgs/msg/MeshBlock";
}

template<>
struct has_fixed_size<voxblox_msgs::msg::MeshBlock>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voxblox_msgs::msg::MeshBlock>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voxblox_msgs::msg::MeshBlock>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__TRAITS_HPP_
