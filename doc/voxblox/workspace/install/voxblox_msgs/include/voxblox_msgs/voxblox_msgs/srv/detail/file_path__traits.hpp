// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from voxblox_msgs:srv/FilePath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/srv/file_path.hpp"


#ifndef VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__TRAITS_HPP_
#define VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "voxblox_msgs/srv/detail/file_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace voxblox_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FilePath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: file_path
  {
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FilePath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: file_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilePath_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace voxblox_msgs

namespace rosidl_generator_traits
{

[[deprecated("use voxblox_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voxblox_msgs::srv::FilePath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  voxblox_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voxblox_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const voxblox_msgs::srv::FilePath_Request & msg)
{
  return voxblox_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<voxblox_msgs::srv::FilePath_Request>()
{
  return "voxblox_msgs::srv::FilePath_Request";
}

template<>
inline const char * name<voxblox_msgs::srv::FilePath_Request>()
{
  return "voxblox_msgs/srv/FilePath_Request";
}

template<>
struct has_fixed_size<voxblox_msgs::srv::FilePath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voxblox_msgs::srv::FilePath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<voxblox_msgs::srv::FilePath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace voxblox_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FilePath_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FilePath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilePath_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace voxblox_msgs

namespace rosidl_generator_traits
{

[[deprecated("use voxblox_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voxblox_msgs::srv::FilePath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  voxblox_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voxblox_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const voxblox_msgs::srv::FilePath_Response & msg)
{
  return voxblox_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<voxblox_msgs::srv::FilePath_Response>()
{
  return "voxblox_msgs::srv::FilePath_Response";
}

template<>
inline const char * name<voxblox_msgs::srv::FilePath_Response>()
{
  return "voxblox_msgs/srv/FilePath_Response";
}

template<>
struct has_fixed_size<voxblox_msgs::srv::FilePath_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<voxblox_msgs::srv::FilePath_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<voxblox_msgs::srv::FilePath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace voxblox_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FilePath_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const FilePath_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilePath_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace voxblox_msgs

namespace rosidl_generator_traits
{

[[deprecated("use voxblox_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const voxblox_msgs::srv::FilePath_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  voxblox_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use voxblox_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const voxblox_msgs::srv::FilePath_Event & msg)
{
  return voxblox_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<voxblox_msgs::srv::FilePath_Event>()
{
  return "voxblox_msgs::srv::FilePath_Event";
}

template<>
inline const char * name<voxblox_msgs::srv::FilePath_Event>()
{
  return "voxblox_msgs/srv/FilePath_Event";
}

template<>
struct has_fixed_size<voxblox_msgs::srv::FilePath_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<voxblox_msgs::srv::FilePath_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<voxblox_msgs::srv::FilePath_Request>::value && has_bounded_size<voxblox_msgs::srv::FilePath_Response>::value> {};

template<>
struct is_message<voxblox_msgs::srv::FilePath_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<voxblox_msgs::srv::FilePath>()
{
  return "voxblox_msgs::srv::FilePath";
}

template<>
inline const char * name<voxblox_msgs::srv::FilePath>()
{
  return "voxblox_msgs/srv/FilePath";
}

template<>
struct has_fixed_size<voxblox_msgs::srv::FilePath>
  : std::integral_constant<
    bool,
    has_fixed_size<voxblox_msgs::srv::FilePath_Request>::value &&
    has_fixed_size<voxblox_msgs::srv::FilePath_Response>::value
  >
{
};

template<>
struct has_bounded_size<voxblox_msgs::srv::FilePath>
  : std::integral_constant<
    bool,
    has_bounded_size<voxblox_msgs::srv::FilePath_Request>::value &&
    has_bounded_size<voxblox_msgs::srv::FilePath_Response>::value
  >
{
};

template<>
struct is_service<voxblox_msgs::srv::FilePath>
  : std::true_type
{
};

template<>
struct is_service_request<voxblox_msgs::srv::FilePath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<voxblox_msgs::srv::FilePath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__TRAITS_HPP_
