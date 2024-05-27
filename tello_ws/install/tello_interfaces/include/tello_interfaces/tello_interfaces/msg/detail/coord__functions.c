// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tello_interfaces:msg/Coord.idl
// generated code does not contain a copyright notice
#include "tello_interfaces/msg/detail/coord__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tello_interfaces__msg__Coord__init(tello_interfaces__msg__Coord * msg)
{
  if (!msg) {
    return false;
  }
  // coordx
  // coordy
  return true;
}

void
tello_interfaces__msg__Coord__fini(tello_interfaces__msg__Coord * msg)
{
  if (!msg) {
    return;
  }
  // coordx
  // coordy
}

bool
tello_interfaces__msg__Coord__are_equal(const tello_interfaces__msg__Coord * lhs, const tello_interfaces__msg__Coord * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // coordx
  if (lhs->coordx != rhs->coordx) {
    return false;
  }
  // coordy
  if (lhs->coordy != rhs->coordy) {
    return false;
  }
  return true;
}

bool
tello_interfaces__msg__Coord__copy(
  const tello_interfaces__msg__Coord * input,
  tello_interfaces__msg__Coord * output)
{
  if (!input || !output) {
    return false;
  }
  // coordx
  output->coordx = input->coordx;
  // coordy
  output->coordy = input->coordy;
  return true;
}

tello_interfaces__msg__Coord *
tello_interfaces__msg__Coord__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tello_interfaces__msg__Coord * msg = (tello_interfaces__msg__Coord *)allocator.allocate(sizeof(tello_interfaces__msg__Coord), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tello_interfaces__msg__Coord));
  bool success = tello_interfaces__msg__Coord__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tello_interfaces__msg__Coord__destroy(tello_interfaces__msg__Coord * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tello_interfaces__msg__Coord__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tello_interfaces__msg__Coord__Sequence__init(tello_interfaces__msg__Coord__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tello_interfaces__msg__Coord * data = NULL;

  if (size) {
    data = (tello_interfaces__msg__Coord *)allocator.zero_allocate(size, sizeof(tello_interfaces__msg__Coord), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tello_interfaces__msg__Coord__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tello_interfaces__msg__Coord__fini(&data[i - 1]);
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
tello_interfaces__msg__Coord__Sequence__fini(tello_interfaces__msg__Coord__Sequence * array)
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
      tello_interfaces__msg__Coord__fini(&array->data[i]);
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

tello_interfaces__msg__Coord__Sequence *
tello_interfaces__msg__Coord__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tello_interfaces__msg__Coord__Sequence * array = (tello_interfaces__msg__Coord__Sequence *)allocator.allocate(sizeof(tello_interfaces__msg__Coord__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tello_interfaces__msg__Coord__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tello_interfaces__msg__Coord__Sequence__destroy(tello_interfaces__msg__Coord__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tello_interfaces__msg__Coord__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tello_interfaces__msg__Coord__Sequence__are_equal(const tello_interfaces__msg__Coord__Sequence * lhs, const tello_interfaces__msg__Coord__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tello_interfaces__msg__Coord__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tello_interfaces__msg__Coord__Sequence__copy(
  const tello_interfaces__msg__Coord__Sequence * input,
  tello_interfaces__msg__Coord__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tello_interfaces__msg__Coord);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tello_interfaces__msg__Coord * data =
      (tello_interfaces__msg__Coord *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tello_interfaces__msg__Coord__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tello_interfaces__msg__Coord__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tello_interfaces__msg__Coord__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
