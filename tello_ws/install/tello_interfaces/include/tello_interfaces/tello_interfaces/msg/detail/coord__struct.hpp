// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tello_interfaces:msg/Coord.idl
// generated code does not contain a copyright notice

#ifndef TELLO_INTERFACES__MSG__DETAIL__COORD__STRUCT_HPP_
#define TELLO_INTERFACES__MSG__DETAIL__COORD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tello_interfaces__msg__Coord __attribute__((deprecated))
#else
# define DEPRECATED__tello_interfaces__msg__Coord __declspec(deprecated)
#endif

namespace tello_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Coord_
{
  using Type = Coord_<ContainerAllocator>;

  explicit Coord_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coordx = 0ll;
      this->coordy = 0ll;
    }
  }

  explicit Coord_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coordx = 0ll;
      this->coordy = 0ll;
    }
  }

  // field types and members
  using _coordx_type =
    int64_t;
  _coordx_type coordx;
  using _coordy_type =
    int64_t;
  _coordy_type coordy;

  // setters for named parameter idiom
  Type & set__coordx(
    const int64_t & _arg)
  {
    this->coordx = _arg;
    return *this;
  }
  Type & set__coordy(
    const int64_t & _arg)
  {
    this->coordy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tello_interfaces::msg::Coord_<ContainerAllocator> *;
  using ConstRawPtr =
    const tello_interfaces::msg::Coord_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tello_interfaces::msg::Coord_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tello_interfaces::msg::Coord_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tello_interfaces::msg::Coord_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tello_interfaces::msg::Coord_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tello_interfaces::msg::Coord_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tello_interfaces::msg::Coord_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tello_interfaces::msg::Coord_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tello_interfaces::msg::Coord_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tello_interfaces__msg__Coord
    std::shared_ptr<tello_interfaces::msg::Coord_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tello_interfaces__msg__Coord
    std::shared_ptr<tello_interfaces::msg::Coord_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coord_ & other) const
  {
    if (this->coordx != other.coordx) {
      return false;
    }
    if (this->coordy != other.coordy) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coord_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coord_

// alias to use template instance with default allocator
using Coord =
  tello_interfaces::msg::Coord_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tello_interfaces

#endif  // TELLO_INTERFACES__MSG__DETAIL__COORD__STRUCT_HPP_
