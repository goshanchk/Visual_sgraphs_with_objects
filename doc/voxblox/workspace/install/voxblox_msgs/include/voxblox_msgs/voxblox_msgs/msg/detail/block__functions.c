// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from voxblox_msgs:msg/Block.idl
// generated code does not contain a copyright notice
#include "voxblox_msgs/msg/detail/block__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
voxblox_msgs__msg__Block__init(voxblox_msgs__msg__Block * msg)
{
  if (!msg) {
    return false;
  }
  // x_index
  // y_index
  // z_index
  // data
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->data, 0)) {
    voxblox_msgs__msg__Block__fini(msg);
    return false;
  }
  return true;
}

void
voxblox_msgs__msg__Block__fini(voxblox_msgs__msg__Block * msg)
{
  if (!msg) {
    return;
  }
  // x_index
  // y_index
  // z_index
  // data
  rosidl_runtime_c__uint32__Sequence__fini(&msg->data);
}

bool
voxblox_msgs__msg__Block__are_equal(const voxblox_msgs__msg__Block * lhs, const voxblox_msgs__msg__Block * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_index
  if (lhs->x_index != rhs->x_index) {
    return false;
  }
  // y_index
  if (lhs->y_index != rhs->y_index) {
    return false;
  }
  // z_index
  if (lhs->z_index != rhs->z_index) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
voxblox_msgs__msg__Block__copy(
  const voxblox_msgs__msg__Block * input,
  voxblox_msgs__msg__Block * output)
{
  if (!input || !output) {
    return false;
  }
  // x_index
  output->x_index = input->x_index;
  // y_index
  output->y_index = input->y_index;
  // z_index
  output->z_index = input->z_index;
  // data
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

voxblox_msgs__msg__Block *
voxblox_msgs__msg__Block__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__Block * msg = (voxblox_msgs__msg__Block *)allocator.allocate(sizeof(voxblox_msgs__msg__Block), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voxblox_msgs__msg__Block));
  bool success = voxblox_msgs__msg__Block__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voxblox_msgs__msg__Block__destroy(voxblox_msgs__msg__Block * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voxblox_msgs__msg__Block__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voxblox_msgs__msg__Block__Sequence__init(voxblox_msgs__msg__Block__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__Block * data = NULL;

  if (size) {
    data = (voxblox_msgs__msg__Block *)allocator.zero_allocate(size, sizeof(voxblox_msgs__msg__Block), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voxblox_msgs__msg__Block__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voxblox_msgs__msg__Block__fini(&data[i - 1]);
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
voxblox_msgs__msg__Block__Sequence__fini(voxblox_msgs__msg__Block__Sequence * array)
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
      voxblox_msgs__msg__Block__fini(&array->data[i]);
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

voxblox_msgs__msg__Block__Sequence *
voxblox_msgs__msg__Block__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__Block__Sequence * array = (voxblox_msgs__msg__Block__Sequence *)allocator.allocate(sizeof(voxblox_msgs__msg__Block__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voxblox_msgs__msg__Block__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voxblox_msgs__msg__Block__Sequence__destroy(voxblox_msgs__msg__Block__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voxblox_msgs__msg__Block__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voxblox_msgs__msg__Block__Sequence__are_equal(const voxblox_msgs__msg__Block__Sequence * lhs, const voxblox_msgs__msg__Block__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voxblox_msgs__msg__Block__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voxblox_msgs__msg__Block__Sequence__copy(
  const voxblox_msgs__msg__Block__Sequence * input,
  voxblox_msgs__msg__Block__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voxblox_msgs__msg__Block);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voxblox_msgs__msg__Block * data =
      (voxblox_msgs__msg__Block *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voxblox_msgs__msg__Block__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voxblox_msgs__msg__Block__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voxblox_msgs__msg__Block__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
