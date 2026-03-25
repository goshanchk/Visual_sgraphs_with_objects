// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from voxblox_msgs:msg/Layer.idl
// generated code does not contain a copyright notice
#include "voxblox_msgs/msg/detail/layer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `layer_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `blocks`
#include "voxblox_msgs/msg/detail/block__functions.h"

bool
voxblox_msgs__msg__Layer__init(voxblox_msgs__msg__Layer * msg)
{
  if (!msg) {
    return false;
  }
  // voxel_size
  // voxels_per_side
  // layer_type
  if (!rosidl_runtime_c__String__init(&msg->layer_type)) {
    voxblox_msgs__msg__Layer__fini(msg);
    return false;
  }
  // action
  // blocks
  if (!voxblox_msgs__msg__Block__Sequence__init(&msg->blocks, 0)) {
    voxblox_msgs__msg__Layer__fini(msg);
    return false;
  }
  return true;
}

void
voxblox_msgs__msg__Layer__fini(voxblox_msgs__msg__Layer * msg)
{
  if (!msg) {
    return;
  }
  // voxel_size
  // voxels_per_side
  // layer_type
  rosidl_runtime_c__String__fini(&msg->layer_type);
  // action
  // blocks
  voxblox_msgs__msg__Block__Sequence__fini(&msg->blocks);
}

bool
voxblox_msgs__msg__Layer__are_equal(const voxblox_msgs__msg__Layer * lhs, const voxblox_msgs__msg__Layer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // voxel_size
  if (lhs->voxel_size != rhs->voxel_size) {
    return false;
  }
  // voxels_per_side
  if (lhs->voxels_per_side != rhs->voxels_per_side) {
    return false;
  }
  // layer_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->layer_type), &(rhs->layer_type)))
  {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // blocks
  if (!voxblox_msgs__msg__Block__Sequence__are_equal(
      &(lhs->blocks), &(rhs->blocks)))
  {
    return false;
  }
  return true;
}

bool
voxblox_msgs__msg__Layer__copy(
  const voxblox_msgs__msg__Layer * input,
  voxblox_msgs__msg__Layer * output)
{
  if (!input || !output) {
    return false;
  }
  // voxel_size
  output->voxel_size = input->voxel_size;
  // voxels_per_side
  output->voxels_per_side = input->voxels_per_side;
  // layer_type
  if (!rosidl_runtime_c__String__copy(
      &(input->layer_type), &(output->layer_type)))
  {
    return false;
  }
  // action
  output->action = input->action;
  // blocks
  if (!voxblox_msgs__msg__Block__Sequence__copy(
      &(input->blocks), &(output->blocks)))
  {
    return false;
  }
  return true;
}

voxblox_msgs__msg__Layer *
voxblox_msgs__msg__Layer__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__Layer * msg = (voxblox_msgs__msg__Layer *)allocator.allocate(sizeof(voxblox_msgs__msg__Layer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voxblox_msgs__msg__Layer));
  bool success = voxblox_msgs__msg__Layer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voxblox_msgs__msg__Layer__destroy(voxblox_msgs__msg__Layer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voxblox_msgs__msg__Layer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voxblox_msgs__msg__Layer__Sequence__init(voxblox_msgs__msg__Layer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__Layer * data = NULL;

  if (size) {
    data = (voxblox_msgs__msg__Layer *)allocator.zero_allocate(size, sizeof(voxblox_msgs__msg__Layer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voxblox_msgs__msg__Layer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voxblox_msgs__msg__Layer__fini(&data[i - 1]);
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
voxblox_msgs__msg__Layer__Sequence__fini(voxblox_msgs__msg__Layer__Sequence * array)
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
      voxblox_msgs__msg__Layer__fini(&array->data[i]);
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

voxblox_msgs__msg__Layer__Sequence *
voxblox_msgs__msg__Layer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__Layer__Sequence * array = (voxblox_msgs__msg__Layer__Sequence *)allocator.allocate(sizeof(voxblox_msgs__msg__Layer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voxblox_msgs__msg__Layer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voxblox_msgs__msg__Layer__Sequence__destroy(voxblox_msgs__msg__Layer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voxblox_msgs__msg__Layer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voxblox_msgs__msg__Layer__Sequence__are_equal(const voxblox_msgs__msg__Layer__Sequence * lhs, const voxblox_msgs__msg__Layer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voxblox_msgs__msg__Layer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voxblox_msgs__msg__Layer__Sequence__copy(
  const voxblox_msgs__msg__Layer__Sequence * input,
  voxblox_msgs__msg__Layer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voxblox_msgs__msg__Layer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voxblox_msgs__msg__Layer * data =
      (voxblox_msgs__msg__Layer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voxblox_msgs__msg__Layer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voxblox_msgs__msg__Layer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voxblox_msgs__msg__Layer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
