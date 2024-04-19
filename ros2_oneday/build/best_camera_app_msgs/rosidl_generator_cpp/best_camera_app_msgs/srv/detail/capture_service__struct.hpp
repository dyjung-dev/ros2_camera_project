// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from best_camera_app_msgs:srv/CaptureService.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAPTURE_SERVICE__STRUCT_HPP_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAPTURE_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__best_camera_app_msgs__srv__CaptureService_Request __attribute__((deprecated))
#else
# define DEPRECATED__best_camera_app_msgs__srv__CaptureService_Request __declspec(deprecated)
#endif

namespace best_camera_app_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureService_Request_
{
  using Type = CaptureService_Request_<ContainerAllocator>;

  explicit CaptureService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capture_true = false;
    }
  }

  explicit CaptureService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capture_true = false;
    }
  }

  // field types and members
  using _capture_true_type =
    bool;
  _capture_true_type capture_true;

  // setters for named parameter idiom
  Type & set__capture_true(
    const bool & _arg)
  {
    this->capture_true = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__best_camera_app_msgs__srv__CaptureService_Request
    std::shared_ptr<best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__best_camera_app_msgs__srv__CaptureService_Request
    std::shared_ptr<best_camera_app_msgs::srv::CaptureService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureService_Request_ & other) const
  {
    if (this->capture_true != other.capture_true) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureService_Request_

// alias to use template instance with default allocator
using CaptureService_Request =
  best_camera_app_msgs::srv::CaptureService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace best_camera_app_msgs


#ifndef _WIN32
# define DEPRECATED__best_camera_app_msgs__srv__CaptureService_Response __attribute__((deprecated))
#else
# define DEPRECATED__best_camera_app_msgs__srv__CaptureService_Response __declspec(deprecated)
#endif

namespace best_camera_app_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureService_Response_
{
  using Type = CaptureService_Response_<ContainerAllocator>;

  explicit CaptureService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_path = "";
    }
  }

  explicit CaptureService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_path = "";
    }
  }

  // field types and members
  using _result_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_path_type result_path;

  // setters for named parameter idiom
  Type & set__result_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__best_camera_app_msgs__srv__CaptureService_Response
    std::shared_ptr<best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__best_camera_app_msgs__srv__CaptureService_Response
    std::shared_ptr<best_camera_app_msgs::srv::CaptureService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureService_Response_ & other) const
  {
    if (this->result_path != other.result_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureService_Response_

// alias to use template instance with default allocator
using CaptureService_Response =
  best_camera_app_msgs::srv::CaptureService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace best_camera_app_msgs

namespace best_camera_app_msgs
{

namespace srv
{

struct CaptureService
{
  using Request = best_camera_app_msgs::srv::CaptureService_Request;
  using Response = best_camera_app_msgs::srv::CaptureService_Response;
};

}  // namespace srv

}  // namespace best_camera_app_msgs

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAPTURE_SERVICE__STRUCT_HPP_
