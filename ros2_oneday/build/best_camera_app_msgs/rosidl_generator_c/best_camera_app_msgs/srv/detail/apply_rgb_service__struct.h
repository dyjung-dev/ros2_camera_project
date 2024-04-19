// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from best_camera_app_msgs:srv/ApplyRGBService.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__STRUCT_H_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ApplyRGBService in the package best_camera_app_msgs.
typedef struct best_camera_app_msgs__srv__ApplyRGBService_Request
{
  double r;
  double g;
  double b;
} best_camera_app_msgs__srv__ApplyRGBService_Request;

// Struct for a sequence of best_camera_app_msgs__srv__ApplyRGBService_Request.
typedef struct best_camera_app_msgs__srv__ApplyRGBService_Request__Sequence
{
  best_camera_app_msgs__srv__ApplyRGBService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} best_camera_app_msgs__srv__ApplyRGBService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ApplyRGBService in the package best_camera_app_msgs.
typedef struct best_camera_app_msgs__srv__ApplyRGBService_Response
{
  rosidl_runtime_c__String result;
} best_camera_app_msgs__srv__ApplyRGBService_Response;

// Struct for a sequence of best_camera_app_msgs__srv__ApplyRGBService_Response.
typedef struct best_camera_app_msgs__srv__ApplyRGBService_Response__Sequence
{
  best_camera_app_msgs__srv__ApplyRGBService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} best_camera_app_msgs__srv__ApplyRGBService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__STRUCT_H_
