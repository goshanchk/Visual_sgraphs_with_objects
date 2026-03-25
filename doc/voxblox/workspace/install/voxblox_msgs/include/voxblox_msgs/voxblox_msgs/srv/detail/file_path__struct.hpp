// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from voxblox_msgs:srv/FilePath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/srv/file_path.hpp"


#ifndef VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__STRUCT_HPP_
#define VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__voxblox_msgs__srv__FilePath_Request __attribute__((deprecated))
#else
# define DEPRECATED__voxblox_msgs__srv__FilePath_Request __declspec(deprecated)
#endif

namespace voxblox_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FilePath_Request_
{
  using Type = FilePath_Request_<ContainerAllocator>;

  explicit FilePath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
    }
  }

  explicit FilePath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
    }
  }

  // field types and members
  using _file_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_path_type file_path;

  // setters for named parameter idiom
  Type & set__file_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voxblox_msgs::srv::FilePath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const voxblox_msgs::srv::FilePath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::srv::FilePath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::srv::FilePath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voxblox_msgs__srv__FilePath_Request
    std::shared_ptr<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voxblox_msgs__srv__FilePath_Request
    std::shared_ptr<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilePath_Request_ & other) const
  {
    if (this->file_path != other.file_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const FilePath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilePath_Request_

// alias to use template instance with default allocator
using FilePath_Request =
  voxblox_msgs::srv::FilePath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace voxblox_msgs


#ifndef _WIN32
# define DEPRECATED__voxblox_msgs__srv__FilePath_Response __attribute__((deprecated))
#else
# define DEPRECATED__voxblox_msgs__srv__FilePath_Response __declspec(deprecated)
#endif

namespace voxblox_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FilePath_Response_
{
  using Type = FilePath_Response_<ContainerAllocator>;

  explicit FilePath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit FilePath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    voxblox_msgs::srv::FilePath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const voxblox_msgs::srv::FilePath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::srv::FilePath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::srv::FilePath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voxblox_msgs__srv__FilePath_Response
    std::shared_ptr<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voxblox_msgs__srv__FilePath_Response
    std::shared_ptr<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilePath_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const FilePath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilePath_Response_

// alias to use template instance with default allocator
using FilePath_Response =
  voxblox_msgs::srv::FilePath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace voxblox_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__voxblox_msgs__srv__FilePath_Event __attribute__((deprecated))
#else
# define DEPRECATED__voxblox_msgs__srv__FilePath_Event __declspec(deprecated)
#endif

namespace voxblox_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FilePath_Event_
{
  using Type = FilePath_Event_<ContainerAllocator>;

  explicit FilePath_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit FilePath_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voxblox_msgs::srv::FilePath_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<voxblox_msgs::srv::FilePath_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    voxblox_msgs::srv::FilePath_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const voxblox_msgs::srv::FilePath_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<voxblox_msgs::srv::FilePath_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<voxblox_msgs::srv::FilePath_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::srv::FilePath_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::srv::FilePath_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      voxblox_msgs::srv::FilePath_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<voxblox_msgs::srv::FilePath_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<voxblox_msgs::srv::FilePath_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<voxblox_msgs::srv::FilePath_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__voxblox_msgs__srv__FilePath_Event
    std::shared_ptr<voxblox_msgs::srv::FilePath_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__voxblox_msgs__srv__FilePath_Event
    std::shared_ptr<voxblox_msgs::srv::FilePath_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilePath_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const FilePath_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilePath_Event_

// alias to use template instance with default allocator
using FilePath_Event =
  voxblox_msgs::srv::FilePath_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace voxblox_msgs

namespace voxblox_msgs
{

namespace srv
{

struct FilePath
{
  using Request = voxblox_msgs::srv::FilePath_Request;
  using Response = voxblox_msgs::srv::FilePath_Response;
  using Event = voxblox_msgs::srv::FilePath_Event;
};

}  // namespace srv

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__STRUCT_HPP_
