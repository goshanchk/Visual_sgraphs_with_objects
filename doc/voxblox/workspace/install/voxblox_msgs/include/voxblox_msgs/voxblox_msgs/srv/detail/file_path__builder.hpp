// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from voxblox_msgs:srv/FilePath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/srv/file_path.hpp"


#ifndef VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__BUILDER_HPP_
#define VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "voxblox_msgs/srv/detail/file_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace voxblox_msgs
{

namespace srv
{

namespace builder
{

class Init_FilePath_Request_file_path
{
public:
  Init_FilePath_Request_file_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::voxblox_msgs::srv::FilePath_Request file_path(::voxblox_msgs::srv::FilePath_Request::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voxblox_msgs::srv::FilePath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::voxblox_msgs::srv::FilePath_Request>()
{
  return voxblox_msgs::srv::builder::Init_FilePath_Request_file_path();
}

}  // namespace voxblox_msgs


namespace voxblox_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::voxblox_msgs::srv::FilePath_Response>()
{
  return ::voxblox_msgs::srv::FilePath_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace voxblox_msgs


namespace voxblox_msgs
{

namespace srv
{

namespace builder
{

class Init_FilePath_Event_response
{
public:
  explicit Init_FilePath_Event_response(::voxblox_msgs::srv::FilePath_Event & msg)
  : msg_(msg)
  {}
  ::voxblox_msgs::srv::FilePath_Event response(::voxblox_msgs::srv::FilePath_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voxblox_msgs::srv::FilePath_Event msg_;
};

class Init_FilePath_Event_request
{
public:
  explicit Init_FilePath_Event_request(::voxblox_msgs::srv::FilePath_Event & msg)
  : msg_(msg)
  {}
  Init_FilePath_Event_response request(::voxblox_msgs::srv::FilePath_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FilePath_Event_response(msg_);
  }

private:
  ::voxblox_msgs::srv::FilePath_Event msg_;
};

class Init_FilePath_Event_info
{
public:
  Init_FilePath_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FilePath_Event_request info(::voxblox_msgs::srv::FilePath_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FilePath_Event_request(msg_);
  }

private:
  ::voxblox_msgs::srv::FilePath_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::voxblox_msgs::srv::FilePath_Event>()
{
  return voxblox_msgs::srv::builder::Init_FilePath_Event_info();
}

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__BUILDER_HPP_
