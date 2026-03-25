// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voxblox_msgs:srv/FilePath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/srv/file_path.h"


#ifndef VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__STRUCT_H_
#define VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FilePath in the package voxblox_msgs.
typedef struct voxblox_msgs__srv__FilePath_Request
{
  rosidl_runtime_c__String file_path;
} voxblox_msgs__srv__FilePath_Request;

// Struct for a sequence of voxblox_msgs__srv__FilePath_Request.
typedef struct voxblox_msgs__srv__FilePath_Request__Sequence
{
  voxblox_msgs__srv__FilePath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voxblox_msgs__srv__FilePath_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/FilePath in the package voxblox_msgs.
typedef struct voxblox_msgs__srv__FilePath_Response
{
  uint8_t structure_needs_at_least_one_member;
} voxblox_msgs__srv__FilePath_Response;

// Struct for a sequence of voxblox_msgs__srv__FilePath_Response.
typedef struct voxblox_msgs__srv__FilePath_Response__Sequence
{
  voxblox_msgs__srv__FilePath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voxblox_msgs__srv__FilePath_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  voxblox_msgs__srv__FilePath_Event__request__MAX_SIZE = 1
};
// response
enum
{
  voxblox_msgs__srv__FilePath_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/FilePath in the package voxblox_msgs.
typedef struct voxblox_msgs__srv__FilePath_Event
{
  service_msgs__msg__ServiceEventInfo info;
  voxblox_msgs__srv__FilePath_Request__Sequence request;
  voxblox_msgs__srv__FilePath_Response__Sequence response;
} voxblox_msgs__srv__FilePath_Event;

// Struct for a sequence of voxblox_msgs__srv__FilePath_Event.
typedef struct voxblox_msgs__srv__FilePath_Event__Sequence
{
  voxblox_msgs__srv__FilePath_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voxblox_msgs__srv__FilePath_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOXBLOX_MSGS__SRV__DETAIL__FILE_PATH__STRUCT_H_
