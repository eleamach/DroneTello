// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tello_interfaces:msg/Coord.idl
// generated code does not contain a copyright notice

#ifndef TELLO_INTERFACES__MSG__DETAIL__COORD__STRUCT_H_
#define TELLO_INTERFACES__MSG__DETAIL__COORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Coord in the package tello_interfaces.
typedef struct tello_interfaces__msg__Coord
{
  int64_t coordx;
  int64_t coordy;
} tello_interfaces__msg__Coord;

// Struct for a sequence of tello_interfaces__msg__Coord.
typedef struct tello_interfaces__msg__Coord__Sequence
{
  tello_interfaces__msg__Coord * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tello_interfaces__msg__Coord__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELLO_INTERFACES__MSG__DETAIL__COORD__STRUCT_H_
