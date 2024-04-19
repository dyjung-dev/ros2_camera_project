// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from best_camera_app_msgs:srv/CaptureServer.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAPTURE_SERVER__BUILDER_HPP_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAPTURE_SERVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "best_camera_app_msgs/srv/detail/capture_server__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace best_camera_app_msgs
{

namespace srv
{

namespace builder
{

class Init_CaptureServer_Request_num
{
public:
  Init_CaptureServer_Request_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::best_camera_app_msgs::srv::CaptureServer_Request num(::best_camera_app_msgs::srv::CaptureServer_Request::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::best_camera_app_msgs::srv::CaptureServer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::best_camera_app_msgs::srv::CaptureServer_Request>()
{
  return best_camera_app_msgs::srv::builder::Init_CaptureServer_Request_num();
}

}  // namespace best_camera_app_msgs


namespace best_camera_app_msgs
{

namespace srv
{

namespace builder
{

class Init_CaptureServer_Response_result
{
public:
  Init_CaptureServer_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::best_camera_app_msgs::srv::CaptureServer_Response result(::best_camera_app_msgs::srv::CaptureServer_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::best_camera_app_msgs::srv::CaptureServer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::best_camera_app_msgs::srv::CaptureServer_Response>()
{
  return best_camera_app_msgs::srv::builder::Init_CaptureServer_Response_result();
}

}  // namespace best_camera_app_msgs

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAPTURE_SERVER__BUILDER_HPP_
