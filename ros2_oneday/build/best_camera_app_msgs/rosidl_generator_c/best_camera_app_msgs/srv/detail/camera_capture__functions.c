// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from best_camera_app_msgs:srv/CameraCapture.idl
// generated code does not contain a copyright notice
#include "best_camera_app_msgs/srv/detail/camera_capture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
best_camera_app_msgs__srv__CameraCapture_Request__init(best_camera_app_msgs__srv__CameraCapture_Request * msg)
{
  if (!msg) {
    return false;
  }
  // num
  return true;
}

void
best_camera_app_msgs__srv__CameraCapture_Request__fini(best_camera_app_msgs__srv__CameraCapture_Request * msg)
{
  if (!msg) {
    return;
  }
  // num
}

bool
best_camera_app_msgs__srv__CameraCapture_Request__are_equal(const best_camera_app_msgs__srv__CameraCapture_Request * lhs, const best_camera_app_msgs__srv__CameraCapture_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  return true;
}

bool
best_camera_app_msgs__srv__CameraCapture_Request__copy(
  const best_camera_app_msgs__srv__CameraCapture_Request * input,
  best_camera_app_msgs__srv__CameraCapture_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // num
  output->num = input->num;
  return true;
}

best_camera_app_msgs__srv__CameraCapture_Request *
best_camera_app_msgs__srv__CameraCapture_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__CameraCapture_Request * msg = (best_camera_app_msgs__srv__CameraCapture_Request *)allocator.allocate(sizeof(best_camera_app_msgs__srv__CameraCapture_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(best_camera_app_msgs__srv__CameraCapture_Request));
  bool success = best_camera_app_msgs__srv__CameraCapture_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
best_camera_app_msgs__srv__CameraCapture_Request__destroy(best_camera_app_msgs__srv__CameraCapture_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    best_camera_app_msgs__srv__CameraCapture_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
best_camera_app_msgs__srv__CameraCapture_Request__Sequence__init(best_camera_app_msgs__srv__CameraCapture_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__CameraCapture_Request * data = NULL;

  if (size) {
    data = (best_camera_app_msgs__srv__CameraCapture_Request *)allocator.zero_allocate(size, sizeof(best_camera_app_msgs__srv__CameraCapture_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = best_camera_app_msgs__srv__CameraCapture_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        best_camera_app_msgs__srv__CameraCapture_Request__fini(&data[i - 1]);
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
best_camera_app_msgs__srv__CameraCapture_Request__Sequence__fini(best_camera_app_msgs__srv__CameraCapture_Request__Sequence * array)
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
      best_camera_app_msgs__srv__CameraCapture_Request__fini(&array->data[i]);
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

best_camera_app_msgs__srv__CameraCapture_Request__Sequence *
best_camera_app_msgs__srv__CameraCapture_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__CameraCapture_Request__Sequence * array = (best_camera_app_msgs__srv__CameraCapture_Request__Sequence *)allocator.allocate(sizeof(best_camera_app_msgs__srv__CameraCapture_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = best_camera_app_msgs__srv__CameraCapture_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
best_camera_app_msgs__srv__CameraCapture_Request__Sequence__destroy(best_camera_app_msgs__srv__CameraCapture_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    best_camera_app_msgs__srv__CameraCapture_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
best_camera_app_msgs__srv__CameraCapture_Request__Sequence__are_equal(const best_camera_app_msgs__srv__CameraCapture_Request__Sequence * lhs, const best_camera_app_msgs__srv__CameraCapture_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!best_camera_app_msgs__srv__CameraCapture_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
best_camera_app_msgs__srv__CameraCapture_Request__Sequence__copy(
  const best_camera_app_msgs__srv__CameraCapture_Request__Sequence * input,
  best_camera_app_msgs__srv__CameraCapture_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(best_camera_app_msgs__srv__CameraCapture_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    best_camera_app_msgs__srv__CameraCapture_Request * data =
      (best_camera_app_msgs__srv__CameraCapture_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!best_camera_app_msgs__srv__CameraCapture_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          best_camera_app_msgs__srv__CameraCapture_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!best_camera_app_msgs__srv__CameraCapture_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
best_camera_app_msgs__srv__CameraCapture_Response__init(best_camera_app_msgs__srv__CameraCapture_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
best_camera_app_msgs__srv__CameraCapture_Response__fini(best_camera_app_msgs__srv__CameraCapture_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
best_camera_app_msgs__srv__CameraCapture_Response__are_equal(const best_camera_app_msgs__srv__CameraCapture_Response * lhs, const best_camera_app_msgs__srv__CameraCapture_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
best_camera_app_msgs__srv__CameraCapture_Response__copy(
  const best_camera_app_msgs__srv__CameraCapture_Response * input,
  best_camera_app_msgs__srv__CameraCapture_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

best_camera_app_msgs__srv__CameraCapture_Response *
best_camera_app_msgs__srv__CameraCapture_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__CameraCapture_Response * msg = (best_camera_app_msgs__srv__CameraCapture_Response *)allocator.allocate(sizeof(best_camera_app_msgs__srv__CameraCapture_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(best_camera_app_msgs__srv__CameraCapture_Response));
  bool success = best_camera_app_msgs__srv__CameraCapture_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
best_camera_app_msgs__srv__CameraCapture_Response__destroy(best_camera_app_msgs__srv__CameraCapture_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    best_camera_app_msgs__srv__CameraCapture_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
best_camera_app_msgs__srv__CameraCapture_Response__Sequence__init(best_camera_app_msgs__srv__CameraCapture_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__CameraCapture_Response * data = NULL;

  if (size) {
    data = (best_camera_app_msgs__srv__CameraCapture_Response *)allocator.zero_allocate(size, sizeof(best_camera_app_msgs__srv__CameraCapture_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = best_camera_app_msgs__srv__CameraCapture_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        best_camera_app_msgs__srv__CameraCapture_Response__fini(&data[i - 1]);
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
best_camera_app_msgs__srv__CameraCapture_Response__Sequence__fini(best_camera_app_msgs__srv__CameraCapture_Response__Sequence * array)
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
      best_camera_app_msgs__srv__CameraCapture_Response__fini(&array->data[i]);
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

best_camera_app_msgs__srv__CameraCapture_Response__Sequence *
best_camera_app_msgs__srv__CameraCapture_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__CameraCapture_Response__Sequence * array = (best_camera_app_msgs__srv__CameraCapture_Response__Sequence *)allocator.allocate(sizeof(best_camera_app_msgs__srv__CameraCapture_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = best_camera_app_msgs__srv__CameraCapture_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
best_camera_app_msgs__srv__CameraCapture_Response__Sequence__destroy(best_camera_app_msgs__srv__CameraCapture_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    best_camera_app_msgs__srv__CameraCapture_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
best_camera_app_msgs__srv__CameraCapture_Response__Sequence__are_equal(const best_camera_app_msgs__srv__CameraCapture_Response__Sequence * lhs, const best_camera_app_msgs__srv__CameraCapture_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!best_camera_app_msgs__srv__CameraCapture_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
best_camera_app_msgs__srv__CameraCapture_Response__Sequence__copy(
  const best_camera_app_msgs__srv__CameraCapture_Response__Sequence * input,
  best_camera_app_msgs__srv__CameraCapture_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(best_camera_app_msgs__srv__CameraCapture_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    best_camera_app_msgs__srv__CameraCapture_Response * data =
      (best_camera_app_msgs__srv__CameraCapture_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!best_camera_app_msgs__srv__CameraCapture_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          best_camera_app_msgs__srv__CameraCapture_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!best_camera_app_msgs__srv__CameraCapture_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}