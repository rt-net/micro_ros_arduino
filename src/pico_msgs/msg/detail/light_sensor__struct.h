// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pico_msgs:msg/LightSensor.idl
// generated code does not contain a copyright notice

#ifndef PICO_MSGS__MSG__DETAIL__LIGHT_SENSOR__STRUCT_H_
#define PICO_MSGS__MSG__DETAIL__LIGHT_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LightSensor in the package pico_msgs.
typedef struct pico_msgs__msg__LightSensor
{
  int16_t forward_r;
  int16_t forward_l;
  int16_t left;
  int16_t right;
} pico_msgs__msg__LightSensor;

// Struct for a sequence of pico_msgs__msg__LightSensor.
typedef struct pico_msgs__msg__LightSensor__Sequence
{
  pico_msgs__msg__LightSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pico_msgs__msg__LightSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PICO_MSGS__MSG__DETAIL__LIGHT_SENSOR__STRUCT_H_
