// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from voxblox_msgs:srv/FilePath.idl
// generated code does not contain a copyright notice
#include "voxblox_msgs/srv/detail/file_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `file_path`
#include "rosidl_runtime_c/string_functions.h"

bool
voxblox_msgs__srv__FilePath_Request__init(voxblox_msgs__srv__FilePath_Request * msg)
{
  if (!msg) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__init(&msg->file_path)) {
    voxblox_msgs__srv__FilePath_Request__fini(msg);
    return false;
  }
  return true;
}

void
voxblox_msgs__srv__FilePath_Request__fini(voxblox_msgs__srv__FilePath_Request * msg)
{
  if (!msg) {
    return;
  }
  // file_path
  rosidl_runtime_c__String__fini(&msg->file_path);
}

bool
voxblox_msgs__srv__FilePath_Request__are_equal(const voxblox_msgs__srv__FilePath_Request * lhs, const voxblox_msgs__srv__FilePath_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_path), &(rhs->file_path)))
  {
    return false;
  }
  return true;
}

bool
voxblox_msgs__srv__FilePath_Request__copy(
  const voxblox_msgs__srv__FilePath_Request * input,
  voxblox_msgs__srv__FilePath_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__copy(
      &(input->file_path), &(output->file_path)))
  {
    return false;
  }
  return true;
}

voxblox_msgs__srv__FilePath_Request *
voxblox_msgs__srv__FilePath_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__srv__FilePath_Request * msg = (voxblox_msgs__srv__FilePath_Request *)allocator.allocate(sizeof(voxblox_msgs__srv__FilePath_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voxblox_msgs__srv__FilePath_Request));
  bool success = voxblox_msgs__srv__FilePath_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voxblox_msgs__srv__FilePath_Request__destroy(voxblox_msgs__srv__FilePath_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voxblox_msgs__srv__FilePath_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voxblox_msgs__srv__FilePath_Request__Sequence__init(voxblox_msgs__srv__FilePath_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__srv__FilePath_Request * data = NULL;

  if (size) {
    data = (voxblox_msgs__srv__FilePath_Request *)allocator.zero_allocate(size, sizeof(voxblox_msgs__srv__FilePath_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voxblox_msgs__srv__FilePath_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voxblox_msgs__srv__FilePath_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
voxblox_msgs__srv__FilePath_Request__Sequence__fini(voxblox_msgs__srv__FilePath_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      voxblox_msgs__srv__FilePath_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

voxblox_msgs__srv__FilePath_Request__Sequence *
voxblox_msgs__srv__FilePath_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__srv__FilePath_Request__Sequence * array = (voxblox_msgs__srv__FilePath_Request__Sequence *)allocator.allocate(sizeof(voxblox_msgs__srv__FilePath_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voxblox_msgs__srv__FilePath_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voxblox_msgs__srv__FilePath_Request__Sequence__destroy(voxblox_msgs__srv__FilePath_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voxblox_msgs__srv__FilePath_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voxblox_msgs__srv__FilePath_Request__Sequence__are_equal(const voxblox_msgs__srv__FilePath_Request__Sequence * lhs, const voxblox_msgs__srv__FilePath_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voxblox_msgs__srv__FilePath_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voxblox_msgs__srv__FilePath_Request__Sequence__copy(
  const voxblox_msgs__srv__FilePath_Request__Sequence * input,
  voxblox_msgs__srv__FilePath_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voxblox_msgs__srv__FilePath_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voxblox_msgs__srv__FilePath_Request * data =
      (voxblox_msgs__srv__FilePath_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voxblox_msgs__srv__FilePath_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voxblox_msgs__srv__FilePath_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voxblox_msgs__srv__FilePath_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
voxblox_msgs__srv__FilePath_Response__init(voxblox_msgs__srv__FilePath_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
voxblox_msgs__srv__FilePath_Response__fini(voxblox_msgs__srv__FilePath_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
voxblox_msgs__srv__FilePath_Response__are_equal(const voxblox_msgs__srv__FilePath_Response * lhs, const voxblox_msgs__srv__FilePath_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
voxblox_msgs__srv__FilePath_Response__copy(
  const voxblox_msgs__srv__FilePath_Response * input,
  voxblox_msgs__srv__FilePath_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

voxblox_msgs__srv__FilePath_Response *
voxblox_msgs__srv__FilePath_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__srv__FilePath_Response * msg = (voxblox_msgs__srv__FilePath_Response *)allocator.allocate(sizeof(voxblox_msgs__srv__FilePath_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voxblox_msgs__srv__FilePath_Response));
  bool success = voxblox_msgs__srv__FilePath_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voxblox_msgs__srv__FilePath_Response__destroy(voxblox_msgs__srv__FilePath_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voxblox_msgs__srv__FilePath_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voxblox_msgs__srv__FilePath_Response__Sequence__init(voxblox_msgs__srv__FilePath_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__srv__FilePath_Response * data = NULL;

  if (size) {
    data = (voxblox_msgs__srv__FilePath_Response *)allocator.zero_allocate(size, sizeof(voxblox_msgs__srv__FilePath_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voxblox_msgs__srv__FilePath_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voxblox_msgs__srv__FilePath_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
voxblox_msgs__srv__FilePath_Response__Sequence__fini(voxblox_msgs__srv__FilePath_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      voxblox_msgs__srv__FilePath_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

voxblox_msgs__srv__FilePath_Response__Sequence *
voxblox_msgs__srv__FilePath_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__srv__FilePath_Response__Sequence * array = (voxblox_msgs__srv__FilePath_Response__Sequence *)allocator.allocate(sizeof(voxblox_msgs__srv__FilePath_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voxblox_msgs__srv__FilePath_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voxblox_msgs__srv__FilePath_Response__Sequence__destroy(voxblox_msgs__srv__FilePath_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voxblox_msgs__srv__FilePath_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voxblox_msgs__srv__FilePath_Response__Sequence__are_equal(const voxblox_msgs__srv__FilePath_Response__Sequence * lhs, const voxblox_msgs__srv__FilePath_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voxblox_msgs__srv__FilePath_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voxblox_msgs__srv__FilePath_Response__Sequence__copy(
  const voxblox_msgs__srv__FilePath_Response__Sequence * input,
  voxblox_msgs__srv__FilePath_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voxblox_msgs__srv__FilePath_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voxblox_msgs__srv__FilePath_Response * data =
      (voxblox_msgs__srv__FilePath_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voxblox_msgs__srv__FilePath_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voxblox_msgs__srv__FilePath_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voxblox_msgs__srv__FilePath_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "voxblox_msgs/srv/detail/file_path__functions.h"

bool
voxblox_msgs__srv__FilePath_Event__init(voxblox_msgs__srv__FilePath_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    voxblox_msgs__srv__FilePath_Event__fini(msg);
    return false;
  }
  // request
  if (!voxblox_msgs__srv__FilePath_Request__Sequence__init(&msg->request, 0)) {
    voxblox_msgs__srv__FilePath_Event__fini(msg);
    return false;
  }
  // response
  if (!voxblox_msgs__srv__FilePath_Response__Sequence__init(&msg->response, 0)) {
    voxblox_msgs__srv__FilePath_Event__fini(msg);
    return false;
  }
  return true;
}

void
voxblox_msgs__srv__FilePath_Event__fini(voxblox_msgs__srv__FilePath_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  voxblox_msgs__srv__FilePath_Request__Sequence__fini(&msg->request);
  // response
  voxblox_msgs__srv__FilePath_Response__Sequence__fini(&msg->response);
}

bool
voxblox_msgs__srv__FilePath_Event__are_equal(const voxblox_msgs__srv__FilePath_Event * lhs, const voxblox_msgs__srv__FilePath_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!voxblox_msgs__srv__FilePath_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!voxblox_msgs__srv__FilePath_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
voxblox_msgs__srv__FilePath_Event__copy(
  const voxblox_msgs__srv__FilePath_Event * input,
  voxblox_msgs__srv__FilePath_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!voxblox_msgs__srv__FilePath_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!voxblox_msgs__srv__FilePath_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

voxblox_msgs__srv__FilePath_Event *
voxblox_msgs__srv__FilePath_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__srv__FilePath_Event * msg = (voxblox_msgs__srv__FilePath_Event *)allocator.allocate(sizeof(voxblox_msgs__srv__FilePath_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voxblox_msgs__srv__FilePath_Event));
  bool success = voxblox_msgs__srv__FilePath_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voxblox_msgs__srv__FilePath_Event__destroy(voxblox_msgs__srv__FilePath_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voxblox_msgs__srv__FilePath_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voxblox_msgs__srv__FilePath_Event__Sequence__init(voxblox_msgs__srv__FilePath_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__srv__FilePath_Event * data = NULL;

  if (size) {
    data = (voxblox_msgs__srv__FilePath_Event *)allocator.zero_allocate(size, sizeof(voxblox_msgs__srv__FilePath_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voxblox_msgs__srv__FilePath_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voxblox_msgs__srv__FilePath_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
voxblox_msgs__srv__FilePath_Event__Sequence__fini(voxblox_msgs__srv__FilePath_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      voxblox_msgs__srv__FilePath_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

voxblox_msgs__srv__FilePath_Event__Sequence *
voxblox_msgs__srv__FilePath_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__srv__FilePath_Event__Sequence * array = (voxblox_msgs__srv__FilePath_Event__Sequence *)allocator.allocate(sizeof(voxblox_msgs__srv__FilePath_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voxblox_msgs__srv__FilePath_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voxblox_msgs__srv__FilePath_Event__Sequence__destroy(voxblox_msgs__srv__FilePath_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voxblox_msgs__srv__FilePath_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voxblox_msgs__srv__FilePath_Event__Sequence__are_equal(const voxblox_msgs__srv__FilePath_Event__Sequence * lhs, const voxblox_msgs__srv__FilePath_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voxblox_msgs__srv__FilePath_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voxblox_msgs__srv__FilePath_Event__Sequence__copy(
  const voxblox_msgs__srv__FilePath_Event__Sequence * input,
  voxblox_msgs__srv__FilePath_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voxblox_msgs__srv__FilePath_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voxblox_msgs__srv__FilePath_Event * data =
      (voxblox_msgs__srv__FilePath_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voxblox_msgs__srv__FilePath_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voxblox_msgs__srv__FilePath_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voxblox_msgs__srv__FilePath_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
