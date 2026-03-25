// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from voxblox_msgs:msg/VoxelEvaluationDetails.idl
// generated code does not contain a copyright notice
#include "voxblox_msgs/msg/detail/voxel_evaluation_details__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
voxblox_msgs__msg__VoxelEvaluationDetails__init(voxblox_msgs__msg__VoxelEvaluationDetails * msg)
{
  if (!msg) {
    return false;
  }
  // max_error
  // min_error
  // num_evaluated_voxels
  // num_ignored_voxels
  // num_overlapping_voxels
  // num_non_overlapping_voxels
  return true;
}

void
voxblox_msgs__msg__VoxelEvaluationDetails__fini(voxblox_msgs__msg__VoxelEvaluationDetails * msg)
{
  if (!msg) {
    return;
  }
  // max_error
  // min_error
  // num_evaluated_voxels
  // num_ignored_voxels
  // num_overlapping_voxels
  // num_non_overlapping_voxels
}

bool
voxblox_msgs__msg__VoxelEvaluationDetails__are_equal(const voxblox_msgs__msg__VoxelEvaluationDetails * lhs, const voxblox_msgs__msg__VoxelEvaluationDetails * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // max_error
  if (lhs->max_error != rhs->max_error) {
    return false;
  }
  // min_error
  if (lhs->min_error != rhs->min_error) {
    return false;
  }
  // num_evaluated_voxels
  if (lhs->num_evaluated_voxels != rhs->num_evaluated_voxels) {
    return false;
  }
  // num_ignored_voxels
  if (lhs->num_ignored_voxels != rhs->num_ignored_voxels) {
    return false;
  }
  // num_overlapping_voxels
  if (lhs->num_overlapping_voxels != rhs->num_overlapping_voxels) {
    return false;
  }
  // num_non_overlapping_voxels
  if (lhs->num_non_overlapping_voxels != rhs->num_non_overlapping_voxels) {
    return false;
  }
  return true;
}

bool
voxblox_msgs__msg__VoxelEvaluationDetails__copy(
  const voxblox_msgs__msg__VoxelEvaluationDetails * input,
  voxblox_msgs__msg__VoxelEvaluationDetails * output)
{
  if (!input || !output) {
    return false;
  }
  // max_error
  output->max_error = input->max_error;
  // min_error
  output->min_error = input->min_error;
  // num_evaluated_voxels
  output->num_evaluated_voxels = input->num_evaluated_voxels;
  // num_ignored_voxels
  output->num_ignored_voxels = input->num_ignored_voxels;
  // num_overlapping_voxels
  output->num_overlapping_voxels = input->num_overlapping_voxels;
  // num_non_overlapping_voxels
  output->num_non_overlapping_voxels = input->num_non_overlapping_voxels;
  return true;
}

voxblox_msgs__msg__VoxelEvaluationDetails *
voxblox_msgs__msg__VoxelEvaluationDetails__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__VoxelEvaluationDetails * msg = (voxblox_msgs__msg__VoxelEvaluationDetails *)allocator.allocate(sizeof(voxblox_msgs__msg__VoxelEvaluationDetails), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(voxblox_msgs__msg__VoxelEvaluationDetails));
  bool success = voxblox_msgs__msg__VoxelEvaluationDetails__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
voxblox_msgs__msg__VoxelEvaluationDetails__destroy(voxblox_msgs__msg__VoxelEvaluationDetails * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    voxblox_msgs__msg__VoxelEvaluationDetails__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
voxblox_msgs__msg__VoxelEvaluationDetails__Sequence__init(voxblox_msgs__msg__VoxelEvaluationDetails__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__VoxelEvaluationDetails * data = NULL;

  if (size) {
    data = (voxblox_msgs__msg__VoxelEvaluationDetails *)allocator.zero_allocate(size, sizeof(voxblox_msgs__msg__VoxelEvaluationDetails), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = voxblox_msgs__msg__VoxelEvaluationDetails__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        voxblox_msgs__msg__VoxelEvaluationDetails__fini(&data[i - 1]);
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
voxblox_msgs__msg__VoxelEvaluationDetails__Sequence__fini(voxblox_msgs__msg__VoxelEvaluationDetails__Sequence * array)
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
      voxblox_msgs__msg__VoxelEvaluationDetails__fini(&array->data[i]);
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

voxblox_msgs__msg__VoxelEvaluationDetails__Sequence *
voxblox_msgs__msg__VoxelEvaluationDetails__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  voxblox_msgs__msg__VoxelEvaluationDetails__Sequence * array = (voxblox_msgs__msg__VoxelEvaluationDetails__Sequence *)allocator.allocate(sizeof(voxblox_msgs__msg__VoxelEvaluationDetails__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = voxblox_msgs__msg__VoxelEvaluationDetails__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
voxblox_msgs__msg__VoxelEvaluationDetails__Sequence__destroy(voxblox_msgs__msg__VoxelEvaluationDetails__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    voxblox_msgs__msg__VoxelEvaluationDetails__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
voxblox_msgs__msg__VoxelEvaluationDetails__Sequence__are_equal(const voxblox_msgs__msg__VoxelEvaluationDetails__Sequence * lhs, const voxblox_msgs__msg__VoxelEvaluationDetails__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!voxblox_msgs__msg__VoxelEvaluationDetails__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
voxblox_msgs__msg__VoxelEvaluationDetails__Sequence__copy(
  const voxblox_msgs__msg__VoxelEvaluationDetails__Sequence * input,
  voxblox_msgs__msg__VoxelEvaluationDetails__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(voxblox_msgs__msg__VoxelEvaluationDetails);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    voxblox_msgs__msg__VoxelEvaluationDetails * data =
      (voxblox_msgs__msg__VoxelEvaluationDetails *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!voxblox_msgs__msg__VoxelEvaluationDetails__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          voxblox_msgs__msg__VoxelEvaluationDetails__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!voxblox_msgs__msg__VoxelEvaluationDetails__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
