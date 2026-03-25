// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from voxblox_msgs:msg/MeshBlock.idl
// generated code does not contain a copyright notice
#include "voxblox_msgs/msg/detail/mesh_block__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `z`
// Member `r`
// Member `g`
// Member `b`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
voxblox_msgs__msg__MeshBlock__init(voxblox_msgs__msg__MeshBlock * msg)
{
  if (!msg) {
    return false;
  }
  // index
  // x
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->x, 0)) {
    voxblox_msgs__msg__MeshBlock__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->y, 0)) {
    voxblox_msgs__msg__MeshBlock__fini(msg);
    return false;
  }
  // z
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->z, 0)) {
    voxblox_msgs__msg__MeshBlock__fini(msg);
    return false;
  }
  // r
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->r, 0)) {
    voxblox_msgs__msg__MeshBlock__fini(msg);
    return false;
  }
  // g
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->g, 0)) {
    voxblox_msgs__msg__MeshBlock__fini(msg);
    return false;
  }
  // b
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->b, 0)) {
    voxblox_msgs__msg__MeshBlock__fini(msg);
    return false;
  }
  return true;
}

void
voxblox_msgs__msg__MeshBlock__fini(voxblox_msgs__msg__MeshBlock * msg)
{
  if (!msg) {
    return;
  }
  // index
  // x
  rosidl_runtime_c__uint16__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__uint16__Sequence__fini(&msg->y);
  // z
  rosidl_runtime_c__uint16__Sequence__fini(&msg->z);
  // r
  rosidl_runtime_c__uint8__Sequence__fini(&msg->r);
  // g
  rosidl_runtime_c__uint8__Sequence__fini(&msg->g);
  // b
  rosidl_runtime_c__uint8__Sequence__fini(&msg->b);
}

bool
voxblox_msgs__msg__MeshBlock__are_equal(const voxblox_msgs__msg__MeshBlock * lhs, const voxblox_msgs__msg__MeshBlock * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // index
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->index[i] != rhs->index[i]) {
      return false;
    }
  }
  // x
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->z), &(rhs->z)))
  {
    return false;
  }
  // r
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->r), &(rhs->r)))
  {
    return false;
  }
  // g
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->g), &(rhs->g)))
  {
    return false;
  }
  // b
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->b), &(rhs->b)))
  {
    return false;
  }
  return true;
}

bool
voxblox_msgs__msg__MeshBlock__copy(
  const voxblox_msgs__msg__MeshBlock * input,
  voxblox_msgs__msg__MeshBlock * output)
{
  if (!input || !output) {
    return false;
  }
  // index
  for (size_t i = 0; i < 3; ++i) {
    output->index[i] = input->index[i];
  }
  // x
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->z), &(output->z)))
  {
    return false;
  }
  // r
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->r), &(output->r)))
  {
    return false;
  }
  // g
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->g), &(output->g)))
  {
    return false;
  }
  // b
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->b), &(output->b)))
  {
    return false;
  }
  return true;
}

voxblox_msgs__msg__MeshBlock *
voxblox_msgs__msg__MeshBlock__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__MeshBlock * msg = (voxblox_msgs__msg__MeshBlock *)allocator.allocate(sizeof(voxblox_msgs__msg__MeshBlock), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voxblox_msgs__msg__MeshBlock));
  bool success = voxblox_msgs__msg__MeshBlock__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voxblox_msgs__msg__MeshBlock__destroy(voxblox_msgs__msg__MeshBlock * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voxblox_msgs__msg__MeshBlock__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voxblox_msgs__msg__MeshBlock__Sequence__init(voxblox_msgs__msg__MeshBlock__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__MeshBlock * data = NULL;

  if (size) {
    data = (voxblox_msgs__msg__MeshBlock *)allocator.zero_allocate(size, sizeof(voxblox_msgs__msg__MeshBlock), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voxblox_msgs__msg__MeshBlock__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voxblox_msgs__msg__MeshBlock__fini(&data[i - 1]);
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
voxblox_msgs__msg__MeshBlock__Sequence__fini(voxblox_msgs__msg__MeshBlock__Sequence * array)
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
      voxblox_msgs__msg__MeshBlock__fini(&array->data[i]);
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

voxblox_msgs__msg__MeshBlock__Sequence *
voxblox_msgs__msg__MeshBlock__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__MeshBlock__Sequence * array = (voxblox_msgs__msg__MeshBlock__Sequence *)allocator.allocate(sizeof(voxblox_msgs__msg__MeshBlock__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voxblox_msgs__msg__MeshBlock__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voxblox_msgs__msg__MeshBlock__Sequence__destroy(voxblox_msgs__msg__MeshBlock__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voxblox_msgs__msg__MeshBlock__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voxblox_msgs__msg__MeshBlock__Sequence__are_equal(const voxblox_msgs__msg__MeshBlock__Sequence * lhs, const voxblox_msgs__msg__MeshBlock__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voxblox_msgs__msg__MeshBlock__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voxblox_msgs__msg__MeshBlock__Sequence__copy(
  const voxblox_msgs__msg__MeshBlock__Sequence * input,
  voxblox_msgs__msg__MeshBlock__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voxblox_msgs__msg__MeshBlock);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voxblox_msgs__msg__MeshBlock * data =
      (voxblox_msgs__msg__MeshBlock *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voxblox_msgs__msg__MeshBlock__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voxblox_msgs__msg__MeshBlock__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voxblox_msgs__msg__MeshBlock__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
