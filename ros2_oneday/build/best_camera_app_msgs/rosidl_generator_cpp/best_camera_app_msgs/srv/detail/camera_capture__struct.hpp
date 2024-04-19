// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from best_camera_app_msgs:srv/CameraCapture.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAMERA_CAPTURE__STRUCT_HPP_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAMERA_CAPTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__best_camera_app_msgs__srv__CameraCapture_Request __attribute__((deprecated))
#else
# define DEPRECATED__best_camera_app_msgs__srv__CameraCapture_Request __declspec(deprecated)
#endif

namespace best_camera_app_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraCapture_Request_
{
  using Type = CameraCapture_Request_<ContainerAllocator>;

  explicit CameraCapture_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  explicit CameraCapture_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  // field types and members
  using _num_type =
    int64_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__num(
    const int64_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__best_camera_app_msgs__srv__CameraCapture_Request
    std::shared_ptr<best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__best_camera_app_msgs__srv__CameraCapture_Request
    std::shared_ptr<best_camera_app_msgs::srv::CameraCapture_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraCapture_Request_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraCapture_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraCapture_Request_

// alias to use template instance with default allocator
using CameraCapture_Request =
  best_camera_app_msgs::srv::CameraCapture_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace best_camera_app_msgs


#ifndef _WIN32
# define DEPRECATED__best_camera_app_msgs__srv__CameraCapture_Response __attribute__((deprecated))
#else
# define DEPRECATED__best_camera_app_msgs__srv__CameraCapture_Response __declspec(deprecated)
#endif

namespace best_camera_app_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraCapture_Response_
{
  using Type = CameraCapture_Response_<ContainerAllocator>;

  explicit CameraCapture_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  explicit CameraCapture_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  // field types and members
  using _result_type =
    int64_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int64_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__best_camera_app_msgs__srv__CameraCapture_Response
    std::shared_ptr<best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__best_camera_app_msgs__srv__CameraCapture_Response
    std::shared_ptr<best_camera_app_msgs::srv::CameraCapture_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraCapture_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraCapture_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraCapture_Response_

// alias to use template instance with default allocator
using CameraCapture_Response =
  best_camera_app_msgs::srv::CameraCapture_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace best_camera_app_msgs

namespace best_camera_app_msgs
{

namespace srv
{

struct CameraCapture
{
  using Request = best_camera_app_msgs::srv::CameraCapture_Request;
  using Response = best_camera_app_msgs::srv::CameraCapture_Response;
};

}  // namespace srv

}  // namespace best_camera_app_msgs

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAMERA_CAPTURE__STRUCT_HPP_
