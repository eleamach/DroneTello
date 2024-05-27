// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tello_interfaces:msg/Coord.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tello_interfaces/msg/detail/coord__struct.h"
#include "tello_interfaces/msg/detail/coord__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tello_interfaces__msg__coord__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tello_interfaces.msg._coord.Coord", full_classname_dest, 33) == 0);
  }
  tello_interfaces__msg__Coord * ros_message = _ros_message;
  {  // coordx
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->coordx = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // coordy
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->coordy = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tello_interfaces__msg__coord__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Coord */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tello_interfaces.msg._coord");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Coord");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tello_interfaces__msg__Coord * ros_message = (tello_interfaces__msg__Coord *)raw_ros_message;
  {  // coordx
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->coordx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coordx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coordy
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->coordy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coordy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
