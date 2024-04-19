// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from best_camera_app_msgs:srv/CaptureService.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAPTURE_SERVICE__BUILDER_HPP_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAPTURE_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "best_camera_app_msgs/srv/detail/capture_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace best_camera_app_msgs
{

namespace srv
{

namespace builder
{

class Init_CaptureService_Request_capture_true
{
public:
  Init_CaptureService_Request_capture_true()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::best_camera_app_msgs::srv::CaptureService_Request capture_true(::best_camera_app_msgs::srv::CaptureService_Request::_capture_true_type arg)
  {
    msg_.capture_true = std::move(arg);
    return std::move(msg_);
  }

private:
  ::best_camera_app_msgs::srv::CaptureService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::best_camera_app_msgs::srv::CaptureService_Request>()
{
  return best_camera_app_msgs::srv::builder::Init_CaptureService_Request_capture_true();
}

}  // namespace best_camera_app_msgs


namespace best_camera_app_msgs
{

namespace srv
{

namespace builder
{

class Init_CaptureService_Response_result_path
{
public:
  Init_CaptureService_Response_result_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::best_camera_app_msgs::srv::CaptureService_Response result_path(::best_camera_app_msgs::srv::CaptureService_Response::_result_path_type arg)
  {
    msg_.result_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::best_camera_app_msgs::srv::CaptureService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::best_camera_app_msgs::srv::CaptureService_Response>()
{
  return best_camera_app_msgs::srv::builder::Init_CaptureService_Response_result_path();
}

}  // namespace best_camera_app_msgs

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAPTURE_SERVICE__BUILDER_HPP_
