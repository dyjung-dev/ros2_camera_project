// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from best_camera_app_msgs:srv/VideoRecordService.idl
// generated code does not contain a copyright notice
#include "best_camera_app_msgs/srv/detail/video_record_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `video_start_end`
#include "rosidl_runtime_c/string_functions.h"

bool
best_camera_app_msgs__srv__VideoRecordService_Request__init(best_camera_app_msgs__srv__VideoRecordService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // video_start_end
  if (!rosidl_runtime_c__String__init(&msg->video_start_end)) {
    best_camera_app_msgs__srv__VideoRecordService_Request__fini(msg);
    return false;
  }
  return true;
}

void
best_camera_app_msgs__srv__VideoRecordService_Request__fini(best_camera_app_msgs__srv__VideoRecordService_Request * msg)
{
  if (!msg) {
    return;
  }
  // video_start_end
  rosidl_runtime_c__String__fini(&msg->video_start_end);
}

bool
best_camera_app_msgs__srv__VideoRecordService_Request__are_equal(const best_camera_app_msgs__srv__VideoRecordService_Request * lhs, const best_camera_app_msgs__srv__VideoRecordService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // video_start_end
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->video_start_end), &(rhs->video_start_end)))
  {
    return false;
  }
  return true;
}

bool
best_camera_app_msgs__srv__VideoRecordService_Request__copy(
  const best_camera_app_msgs__srv__VideoRecordService_Request * input,
  best_camera_app_msgs__srv__VideoRecordService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // video_start_end
  if (!rosidl_runtime_c__String__copy(
      &(input->video_start_end), &(output->video_start_end)))
  {
    return false;
  }
  return true;
}

best_camera_app_msgs__srv__VideoRecordService_Request *
best_camera_app_msgs__srv__VideoRecordService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__VideoRecordService_Request * msg = (best_camera_app_msgs__srv__VideoRecordService_Request *)allocator.allocate(sizeof(best_camera_app_msgs__srv__VideoRecordService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(best_camera_app_msgs__srv__VideoRecordService_Request));
  bool success = best_camera_app_msgs__srv__VideoRecordService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
best_camera_app_msgs__srv__VideoRecordService_Request__destroy(best_camera_app_msgs__srv__VideoRecordService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    best_camera_app_msgs__srv__VideoRecordService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__init(best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__VideoRecordService_Request * data = NULL;

  if (size) {
    data = (best_camera_app_msgs__srv__VideoRecordService_Request *)allocator.zero_allocate(size, sizeof(best_camera_app_msgs__srv__VideoRecordService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = best_camera_app_msgs__srv__VideoRecordService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        best_camera_app_msgs__srv__VideoRecordService_Request__fini(&data[i - 1]);
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
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__fini(best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * array)
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
      best_camera_app_msgs__srv__VideoRecordService_Request__fini(&array->data[i]);
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

best_camera_app_msgs__srv__VideoRecordService_Request__Sequence *
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * array = (best_camera_app_msgs__srv__VideoRecordService_Request__Sequence *)allocator.allocate(sizeof(best_camera_app_msgs__srv__VideoRecordService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__destroy(best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__are_equal(const best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * lhs, const best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!best_camera_app_msgs__srv__VideoRecordService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__copy(
  const best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * input,
  best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(best_camera_app_msgs__srv__VideoRecordService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    best_camera_app_msgs__srv__VideoRecordService_Request * data =
      (best_camera_app_msgs__srv__VideoRecordService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!best_camera_app_msgs__srv__VideoRecordService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          best_camera_app_msgs__srv__VideoRecordService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!best_camera_app_msgs__srv__VideoRecordService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_path`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
best_camera_app_msgs__srv__VideoRecordService_Response__init(best_camera_app_msgs__srv__VideoRecordService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result_path
  if (!rosidl_runtime_c__String__init(&msg->result_path)) {
    best_camera_app_msgs__srv__VideoRecordService_Response__fini(msg);
    return false;
  }
  return true;
}

void
best_camera_app_msgs__srv__VideoRecordService_Response__fini(best_camera_app_msgs__srv__VideoRecordService_Response * msg)
{
  if (!msg) {
    return;
  }
  // result_path
  rosidl_runtime_c__String__fini(&msg->result_path);
}

bool
best_camera_app_msgs__srv__VideoRecordService_Response__are_equal(const best_camera_app_msgs__srv__VideoRecordService_Response * lhs, const best_camera_app_msgs__srv__VideoRecordService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_path), &(rhs->result_path)))
  {
    return false;
  }
  return true;
}

bool
best_camera_app_msgs__srv__VideoRecordService_Response__copy(
  const best_camera_app_msgs__srv__VideoRecordService_Response * input,
  best_camera_app_msgs__srv__VideoRecordService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result_path
  if (!rosidl_runtime_c__String__copy(
      &(input->result_path), &(output->result_path)))
  {
    return false;
  }
  return true;
}

best_camera_app_msgs__srv__VideoRecordService_Response *
best_camera_app_msgs__srv__VideoRecordService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__VideoRecordService_Response * msg = (best_camera_app_msgs__srv__VideoRecordService_Response *)allocator.allocate(sizeof(best_camera_app_msgs__srv__VideoRecordService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(best_camera_app_msgs__srv__VideoRecordService_Response));
  bool success = best_camera_app_msgs__srv__VideoRecordService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
best_camera_app_msgs__srv__VideoRecordService_Response__destroy(best_camera_app_msgs__srv__VideoRecordService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    best_camera_app_msgs__srv__VideoRecordService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__init(best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__VideoRecordService_Response * data = NULL;

  if (size) {
    data = (best_camera_app_msgs__srv__VideoRecordService_Response *)allocator.zero_allocate(size, sizeof(best_camera_app_msgs__srv__VideoRecordService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = best_camera_app_msgs__srv__VideoRecordService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        best_camera_app_msgs__srv__VideoRecordService_Response__fini(&data[i - 1]);
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
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__fini(best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * array)
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
      best_camera_app_msgs__srv__VideoRecordService_Response__fini(&array->data[i]);
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

best_camera_app_msgs__srv__VideoRecordService_Response__Sequence *
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * array = (best_camera_app_msgs__srv__VideoRecordService_Response__Sequence *)allocator.allocate(sizeof(best_camera_app_msgs__srv__VideoRecordService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__destroy(best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__are_equal(const best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * lhs, const best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!best_camera_app_msgs__srv__VideoRecordService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__copy(
  const best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * input,
  best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(best_camera_app_msgs__srv__VideoRecordService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    best_camera_app_msgs__srv__VideoRecordService_Response * data =
      (best_camera_app_msgs__srv__VideoRecordService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!best_camera_app_msgs__srv__VideoRecordService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          best_camera_app_msgs__srv__VideoRecordService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!best_camera_app_msgs__srv__VideoRecordService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
