// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from best_camera_app_msgs:srv/ApplyBlurrService.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_BLURR_SERVICE__BUILDER_HPP_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_BLURR_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "best_camera_app_msgs/srv/detail/apply_blurr_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace best_camera_app_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyBlurrService_Request_apply_blurr_true_false
{
public:
  Init_ApplyBlurrService_Request_apply_blurr_true_false()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::best_camera_app_msgs::srv::ApplyBlurrService_Request apply_blurr_true_false(::best_camera_app_msgs::srv::ApplyBlurrService_Request::_apply_blurr_true_false_type arg)
  {
    msg_.apply_blurr_true_false = std::move(arg);
    return std::move(msg_);
  }

private:
  ::best_camera_app_msgs::srv::ApplyBlurrService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::best_camera_app_msgs::srv::ApplyBlurrService_Request>()
{
  return best_camera_app_msgs::srv::builder::Init_ApplyBlurrService_Request_apply_blurr_true_false();
}

}  // namespace best_camera_app_msgs


namespace best_camera_app_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyBlurrService_Response_result
{
public:
  Init_ApplyBlurrService_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::best_camera_app_msgs::srv::ApplyBlurrService_Response result(::best_camera_app_msgs::srv::ApplyBlurrService_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::best_camera_app_msgs::srv::ApplyBlurrService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::best_camera_app_msgs::srv::ApplyBlurrService_Response>()
{
  return best_camera_app_msgs::srv::builder::Init_ApplyBlurrService_Response_result();
}

}  // namespace best_camera_app_msgs

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_BLURR_SERVICE__BUILDER_HPP_
