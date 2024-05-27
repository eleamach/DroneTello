// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tello_interfaces:srv/DroneMode.idl
// generated code does not contain a copyright notice
#include "tello_interfaces/srv/detail/drone_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
tello_interfaces__srv__DroneMode_Request__init(tello_interfaces__srv__DroneMode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  return true;
}

void
tello_interfaces__srv__DroneMode_Request__fini(tello_interfaces__srv__DroneMode_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
}

bool
tello_interfaces__srv__DroneMode_Request__are_equal(const tello_interfaces__srv__DroneMode_Request * lhs, const tello_interfaces__srv__DroneMode_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  return true;
}

bool
tello_interfaces__srv__DroneMode_Request__copy(
  const tello_interfaces__srv__DroneMode_Request * input,
  tello_interfaces__srv__DroneMode_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  return true;
}

tello_interfaces__srv__DroneMode_Request *
tello_interfaces__srv__DroneMode_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tello_interfaces__srv__DroneMode_Request * msg = (tello_interfaces__srv__DroneMode_Request *)allocator.allocate(sizeof(tello_interfaces__srv__DroneMode_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tello_interfaces__srv__DroneMode_Request));
  bool success = tello_interfaces__srv__DroneMode_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tello_interfaces__srv__DroneMode_Request__destroy(tello_interfaces__srv__DroneMode_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tello_interfaces__srv__DroneMode_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tello_interfaces__srv__DroneMode_Request__Sequence__init(tello_interfaces__srv__DroneMode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tello_interfaces__srv__DroneMode_Request * data = NULL;

  if (size) {
    data = (tello_interfaces__srv__DroneMode_Request *)allocator.zero_allocate(size, sizeof(tello_interfaces__srv__DroneMode_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tello_interfaces__srv__DroneMode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tello_interfaces__srv__DroneMode_Request__fini(&data[i - 1]);
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
tello_interfaces__srv__DroneMode_Request__Sequence__fini(tello_interfaces__srv__DroneMode_Request__Sequence * array)
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
      tello_interfaces__srv__DroneMode_Request__fini(&array->data[i]);
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

tello_interfaces__srv__DroneMode_Request__Sequence *
tello_interfaces__srv__DroneMode_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tello_interfaces__srv__DroneMode_Request__Sequence * array = (tello_interfaces__srv__DroneMode_Request__Sequence *)allocator.allocate(sizeof(tello_interfaces__srv__DroneMode_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tello_interfaces__srv__DroneMode_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tello_interfaces__srv__DroneMode_Request__Sequence__destroy(tello_interfaces__srv__DroneMode_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tello_interfaces__srv__DroneMode_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tello_interfaces__srv__DroneMode_Request__Sequence__are_equal(const tello_interfaces__srv__DroneMode_Request__Sequence * lhs, const tello_interfaces__srv__DroneMode_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tello_interfaces__srv__DroneMode_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tello_interfaces__srv__DroneMode_Request__Sequence__copy(
  const tello_interfaces__srv__DroneMode_Request__Sequence * input,
  tello_interfaces__srv__DroneMode_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tello_interfaces__srv__DroneMode_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tello_interfaces__srv__DroneMode_Request * data =
      (tello_interfaces__srv__DroneMode_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tello_interfaces__srv__DroneMode_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tello_interfaces__srv__DroneMode_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tello_interfaces__srv__DroneMode_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tello_interfaces__srv__DroneMode_Response__init(tello_interfaces__srv__DroneMode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // reussi
  return true;
}

void
tello_interfaces__srv__DroneMode_Response__fini(tello_interfaces__srv__DroneMode_Response * msg)
{
  if (!msg) {
    return;
  }
  // reussi
}

bool
tello_interfaces__srv__DroneMode_Response__are_equal(const tello_interfaces__srv__DroneMode_Response * lhs, const tello_interfaces__srv__DroneMode_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reussi
  if (lhs->reussi != rhs->reussi) {
    return false;
  }
  return true;
}

bool
tello_interfaces__srv__DroneMode_Response__copy(
  const tello_interfaces__srv__DroneMode_Response * input,
  tello_interfaces__srv__DroneMode_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // reussi
  output->reussi = input->reussi;
  return true;
}

tello_interfaces__srv__DroneMode_Response *
tello_interfaces__srv__DroneMode_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tello_interfaces__srv__DroneMode_Response * msg = (tello_interfaces__srv__DroneMode_Response *)allocator.allocate(sizeof(tello_interfaces__srv__DroneMode_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tello_interfaces__srv__DroneMode_Response));
  bool success = tello_interfaces__srv__DroneMode_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tello_interfaces__srv__DroneMode_Response__destroy(tello_interfaces__srv__DroneMode_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tello_interfaces__srv__DroneMode_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tello_interfaces__srv__DroneMode_Response__Sequence__init(tello_interfaces__srv__DroneMode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tello_interfaces__srv__DroneMode_Response * data = NULL;

  if (size) {
    data = (tello_interfaces__srv__DroneMode_Response *)allocator.zero_allocate(size, sizeof(tello_interfaces__srv__DroneMode_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tello_interfaces__srv__DroneMode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tello_interfaces__srv__DroneMode_Response__fini(&data[i - 1]);
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
tello_interfaces__srv__DroneMode_Response__Sequence__fini(tello_interfaces__srv__DroneMode_Response__Sequence * array)
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
      tello_interfaces__srv__DroneMode_Response__fini(&array->data[i]);
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

tello_interfaces__srv__DroneMode_Response__Sequence *
tello_interfaces__srv__DroneMode_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tello_interfaces__srv__DroneMode_Response__Sequence * array = (tello_interfaces__srv__DroneMode_Response__Sequence *)allocator.allocate(sizeof(tello_interfaces__srv__DroneMode_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tello_interfaces__srv__DroneMode_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tello_interfaces__srv__DroneMode_Response__Sequence__destroy(tello_interfaces__srv__DroneMode_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tello_interfaces__srv__DroneMode_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tello_interfaces__srv__DroneMode_Response__Sequence__are_equal(const tello_interfaces__srv__DroneMode_Response__Sequence * lhs, const tello_interfaces__srv__DroneMode_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tello_interfaces__srv__DroneMode_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tello_interfaces__srv__DroneMode_Response__Sequence__copy(
  const tello_interfaces__srv__DroneMode_Response__Sequence * input,
  tello_interfaces__srv__DroneMode_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tello_interfaces__srv__DroneMode_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tello_interfaces__srv__DroneMode_Response * data =
      (tello_interfaces__srv__DroneMode_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tello_interfaces__srv__DroneMode_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tello_interfaces__srv__DroneMode_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tello_interfaces__srv__DroneMode_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
