// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from best_camera_app_msgs:srv/ApplyBlurrService.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_BLURR_SERVICE__STRUCT_H_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_BLURR_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ApplyBlurrService in the package best_camera_app_msgs.
typedef struct best_camera_app_msgs__srv__ApplyBlurrService_Request
{
  bool apply_blurr_true_false;
} best_camera_app_msgs__srv__ApplyBlurrService_Request;

// Struct for a sequence of best_camera_app_msgs__srv__ApplyBlurrService_Request.
typedef struct best_camera_app_msgs__srv__ApplyBlurrService_Request__Sequence
{
  best_camera_app_msgs__srv__ApplyBlurrService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} best_camera_app_msgs__srv__ApplyBlurrService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ApplyBlurrService in the package best_camera_app_msgs.
typedef struct best_camera_app_msgs__srv__ApplyBlurrService_Response
{
  rosidl_runtime_c__String result;
} best_camera_app_msgs__srv__ApplyBlurrService_Response;

// Struct for a sequence of best_camera_app_msgs__srv__ApplyBlurrService_Response.
typedef struct best_camera_app_msgs__srv__ApplyBlurrService_Response__Sequence
{
  best_camera_app_msgs__srv__ApplyBlurrService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} best_camera_app_msgs__srv__ApplyBlurrService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_BLURR_SERVICE__STRUCT_H_
