// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_interface_example:srv/AddThreeInts.idl
// generated code does not contain a copyright notice
#include "my_interface_example/srv/detail/add_three_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
my_interface_example__srv__AddThreeInts_Request__init(my_interface_example__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
my_interface_example__srv__AddThreeInts_Request__fini(my_interface_example__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

my_interface_example__srv__AddThreeInts_Request *
my_interface_example__srv__AddThreeInts_Request__create()
{
  my_interface_example__srv__AddThreeInts_Request * msg = (my_interface_example__srv__AddThreeInts_Request *)malloc(sizeof(my_interface_example__srv__AddThreeInts_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interface_example__srv__AddThreeInts_Request));
  bool success = my_interface_example__srv__AddThreeInts_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_interface_example__srv__AddThreeInts_Request__destroy(my_interface_example__srv__AddThreeInts_Request * msg)
{
  if (msg) {
    my_interface_example__srv__AddThreeInts_Request__fini(msg);
  }
  free(msg);
}


bool
my_interface_example__srv__AddThreeInts_Request__Sequence__init(my_interface_example__srv__AddThreeInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_interface_example__srv__AddThreeInts_Request * data = NULL;
  if (size) {
    data = (my_interface_example__srv__AddThreeInts_Request *)calloc(size, sizeof(my_interface_example__srv__AddThreeInts_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interface_example__srv__AddThreeInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interface_example__srv__AddThreeInts_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_interface_example__srv__AddThreeInts_Request__Sequence__fini(my_interface_example__srv__AddThreeInts_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_interface_example__srv__AddThreeInts_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_interface_example__srv__AddThreeInts_Request__Sequence *
my_interface_example__srv__AddThreeInts_Request__Sequence__create(size_t size)
{
  my_interface_example__srv__AddThreeInts_Request__Sequence * array = (my_interface_example__srv__AddThreeInts_Request__Sequence *)malloc(sizeof(my_interface_example__srv__AddThreeInts_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_interface_example__srv__AddThreeInts_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_interface_example__srv__AddThreeInts_Request__Sequence__destroy(my_interface_example__srv__AddThreeInts_Request__Sequence * array)
{
  if (array) {
    my_interface_example__srv__AddThreeInts_Request__Sequence__fini(array);
  }
  free(array);
}


bool
my_interface_example__srv__AddThreeInts_Response__init(my_interface_example__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
my_interface_example__srv__AddThreeInts_Response__fini(my_interface_example__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

my_interface_example__srv__AddThreeInts_Response *
my_interface_example__srv__AddThreeInts_Response__create()
{
  my_interface_example__srv__AddThreeInts_Response * msg = (my_interface_example__srv__AddThreeInts_Response *)malloc(sizeof(my_interface_example__srv__AddThreeInts_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interface_example__srv__AddThreeInts_Response));
  bool success = my_interface_example__srv__AddThreeInts_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_interface_example__srv__AddThreeInts_Response__destroy(my_interface_example__srv__AddThreeInts_Response * msg)
{
  if (msg) {
    my_interface_example__srv__AddThreeInts_Response__fini(msg);
  }
  free(msg);
}


bool
my_interface_example__srv__AddThreeInts_Response__Sequence__init(my_interface_example__srv__AddThreeInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_interface_example__srv__AddThreeInts_Response * data = NULL;
  if (size) {
    data = (my_interface_example__srv__AddThreeInts_Response *)calloc(size, sizeof(my_interface_example__srv__AddThreeInts_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interface_example__srv__AddThreeInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interface_example__srv__AddThreeInts_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_interface_example__srv__AddThreeInts_Response__Sequence__fini(my_interface_example__srv__AddThreeInts_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_interface_example__srv__AddThreeInts_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_interface_example__srv__AddThreeInts_Response__Sequence *
my_interface_example__srv__AddThreeInts_Response__Sequence__create(size_t size)
{
  my_interface_example__srv__AddThreeInts_Response__Sequence * array = (my_interface_example__srv__AddThreeInts_Response__Sequence *)malloc(sizeof(my_interface_example__srv__AddThreeInts_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_interface_example__srv__AddThreeInts_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_interface_example__srv__AddThreeInts_Response__Sequence__destroy(my_interface_example__srv__AddThreeInts_Response__Sequence * array)
{
  if (array) {
    my_interface_example__srv__AddThreeInts_Response__Sequence__fini(array);
  }
  free(array);
}
