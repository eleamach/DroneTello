// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tello_interfaces:srv/DroneMode.idl
// generated code does not contain a copyright notice

#ifndef TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__STRUCT_HPP_
#define TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tello_interfaces__srv__DroneMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__tello_interfaces__srv__DroneMode_Request __declspec(deprecated)
#endif

namespace tello_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DroneMode_Request_
{
  using Type = DroneMode_Request_<ContainerAllocator>;

  explicit DroneMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
    }
  }

  explicit DroneMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
    }
  }

  // field types and members
  using _a_type =
    int32_t;
  _a_type a;

  // setters for named parameter idiom
  Type & set__a(
    const int32_t & _arg)
  {
    this->a = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tello_interfaces::srv::DroneMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tello_interfaces::srv::DroneMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tello_interfaces::srv::DroneMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tello_interfaces::srv::DroneMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tello_interfaces::srv::DroneMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tello_interfaces::srv::DroneMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tello_interfaces::srv::DroneMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tello_interfaces::srv::DroneMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tello_interfaces::srv::DroneMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tello_interfaces::srv::DroneMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tello_interfaces__srv__DroneMode_Request
    std::shared_ptr<tello_interfaces::srv::DroneMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tello_interfaces__srv__DroneMode_Request
    std::shared_ptr<tello_interfaces::srv::DroneMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneMode_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneMode_Request_

// alias to use template instance with default allocator
using DroneMode_Request =
  tello_interfaces::srv::DroneMode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tello_interfaces


#ifndef _WIN32
# define DEPRECATED__tello_interfaces__srv__DroneMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__tello_interfaces__srv__DroneMode_Response __declspec(deprecated)
#endif

namespace tello_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DroneMode_Response_
{
  using Type = DroneMode_Response_<ContainerAllocator>;

  explicit DroneMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reussi = false;
    }
  }

  explicit DroneMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reussi = false;
    }
  }

  // field types and members
  using _reussi_type =
    bool;
  _reussi_type reussi;

  // setters for named parameter idiom
  Type & set__reussi(
    const bool & _arg)
  {
    this->reussi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tello_interfaces::srv::DroneMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tello_interfaces::srv::DroneMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tello_interfaces::srv::DroneMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tello_interfaces::srv::DroneMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tello_interfaces::srv::DroneMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tello_interfaces::srv::DroneMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tello_interfaces::srv::DroneMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tello_interfaces::srv::DroneMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tello_interfaces::srv::DroneMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tello_interfaces::srv::DroneMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tello_interfaces__srv__DroneMode_Response
    std::shared_ptr<tello_interfaces::srv::DroneMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tello_interfaces__srv__DroneMode_Response
    std::shared_ptr<tello_interfaces::srv::DroneMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneMode_Response_ & other) const
  {
    if (this->reussi != other.reussi) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneMode_Response_

// alias to use template instance with default allocator
using DroneMode_Response =
  tello_interfaces::srv::DroneMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tello_interfaces

namespace tello_interfaces
{

namespace srv
{

struct DroneMode
{
  using Request = tello_interfaces::srv::DroneMode_Request;
  using Response = tello_interfaces::srv::DroneMode_Response;
};

}  // namespace srv

}  // namespace tello_interfaces

#endif  // TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__STRUCT_HPP_
