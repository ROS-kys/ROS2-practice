// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from project_interface:action/Controller.idl
// generated code does not contain a copyright notice
#include "project_interface/action/detail/controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `goal_point`
#include "rosidl_runtime_c/string_functions.h"

bool
project_interface__action__Controller_Goal__init(project_interface__action__Controller_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_point
  if (!rosidl_runtime_c__String__init(&msg->goal_point)) {
    project_interface__action__Controller_Goal__fini(msg);
    return false;
  }
  return true;
}

void
project_interface__action__Controller_Goal__fini(project_interface__action__Controller_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_point
  rosidl_runtime_c__String__fini(&msg->goal_point);
}

project_interface__action__Controller_Goal *
project_interface__action__Controller_Goal__create()
{
  project_interface__action__Controller_Goal * msg = (project_interface__action__Controller_Goal *)malloc(sizeof(project_interface__action__Controller_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interface__action__Controller_Goal));
  bool success = project_interface__action__Controller_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interface__action__Controller_Goal__destroy(project_interface__action__Controller_Goal * msg)
{
  if (msg) {
    project_interface__action__Controller_Goal__fini(msg);
  }
  free(msg);
}


bool
project_interface__action__Controller_Goal__Sequence__init(project_interface__action__Controller_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interface__action__Controller_Goal * data = NULL;
  if (size) {
    data = (project_interface__action__Controller_Goal *)calloc(size, sizeof(project_interface__action__Controller_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interface__action__Controller_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interface__action__Controller_Goal__fini(&data[i - 1]);
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
project_interface__action__Controller_Goal__Sequence__fini(project_interface__action__Controller_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interface__action__Controller_Goal__fini(&array->data[i]);
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

project_interface__action__Controller_Goal__Sequence *
project_interface__action__Controller_Goal__Sequence__create(size_t size)
{
  project_interface__action__Controller_Goal__Sequence * array = (project_interface__action__Controller_Goal__Sequence *)malloc(sizeof(project_interface__action__Controller_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interface__action__Controller_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interface__action__Controller_Goal__Sequence__destroy(project_interface__action__Controller_Goal__Sequence * array)
{
  if (array) {
    project_interface__action__Controller_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
project_interface__action__Controller_Result__init(project_interface__action__Controller_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    project_interface__action__Controller_Result__fini(msg);
    return false;
  }
  return true;
}

void
project_interface__action__Controller_Result__fini(project_interface__action__Controller_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

project_interface__action__Controller_Result *
project_interface__action__Controller_Result__create()
{
  project_interface__action__Controller_Result * msg = (project_interface__action__Controller_Result *)malloc(sizeof(project_interface__action__Controller_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interface__action__Controller_Result));
  bool success = project_interface__action__Controller_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interface__action__Controller_Result__destroy(project_interface__action__Controller_Result * msg)
{
  if (msg) {
    project_interface__action__Controller_Result__fini(msg);
  }
  free(msg);
}


bool
project_interface__action__Controller_Result__Sequence__init(project_interface__action__Controller_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interface__action__Controller_Result * data = NULL;
  if (size) {
    data = (project_interface__action__Controller_Result *)calloc(size, sizeof(project_interface__action__Controller_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interface__action__Controller_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interface__action__Controller_Result__fini(&data[i - 1]);
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
project_interface__action__Controller_Result__Sequence__fini(project_interface__action__Controller_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interface__action__Controller_Result__fini(&array->data[i]);
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

project_interface__action__Controller_Result__Sequence *
project_interface__action__Controller_Result__Sequence__create(size_t size)
{
  project_interface__action__Controller_Result__Sequence * array = (project_interface__action__Controller_Result__Sequence *)malloc(sizeof(project_interface__action__Controller_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interface__action__Controller_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interface__action__Controller_Result__Sequence__destroy(project_interface__action__Controller_Result__Sequence * array)
{
  if (array) {
    project_interface__action__Controller_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
project_interface__action__Controller_Feedback__init(project_interface__action__Controller_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    project_interface__action__Controller_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
project_interface__action__Controller_Feedback__fini(project_interface__action__Controller_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

project_interface__action__Controller_Feedback *
project_interface__action__Controller_Feedback__create()
{
  project_interface__action__Controller_Feedback * msg = (project_interface__action__Controller_Feedback *)malloc(sizeof(project_interface__action__Controller_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interface__action__Controller_Feedback));
  bool success = project_interface__action__Controller_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interface__action__Controller_Feedback__destroy(project_interface__action__Controller_Feedback * msg)
{
  if (msg) {
    project_interface__action__Controller_Feedback__fini(msg);
  }
  free(msg);
}


bool
project_interface__action__Controller_Feedback__Sequence__init(project_interface__action__Controller_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interface__action__Controller_Feedback * data = NULL;
  if (size) {
    data = (project_interface__action__Controller_Feedback *)calloc(size, sizeof(project_interface__action__Controller_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interface__action__Controller_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interface__action__Controller_Feedback__fini(&data[i - 1]);
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
project_interface__action__Controller_Feedback__Sequence__fini(project_interface__action__Controller_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interface__action__Controller_Feedback__fini(&array->data[i]);
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

project_interface__action__Controller_Feedback__Sequence *
project_interface__action__Controller_Feedback__Sequence__create(size_t size)
{
  project_interface__action__Controller_Feedback__Sequence * array = (project_interface__action__Controller_Feedback__Sequence *)malloc(sizeof(project_interface__action__Controller_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interface__action__Controller_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interface__action__Controller_Feedback__Sequence__destroy(project_interface__action__Controller_Feedback__Sequence * array)
{
  if (array) {
    project_interface__action__Controller_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "project_interface/action/detail/controller__functions.h"

bool
project_interface__action__Controller_SendGoal_Request__init(project_interface__action__Controller_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    project_interface__action__Controller_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!project_interface__action__Controller_Goal__init(&msg->goal)) {
    project_interface__action__Controller_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
project_interface__action__Controller_SendGoal_Request__fini(project_interface__action__Controller_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  project_interface__action__Controller_Goal__fini(&msg->goal);
}

project_interface__action__Controller_SendGoal_Request *
project_interface__action__Controller_SendGoal_Request__create()
{
  project_interface__action__Controller_SendGoal_Request * msg = (project_interface__action__Controller_SendGoal_Request *)malloc(sizeof(project_interface__action__Controller_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interface__action__Controller_SendGoal_Request));
  bool success = project_interface__action__Controller_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interface__action__Controller_SendGoal_Request__destroy(project_interface__action__Controller_SendGoal_Request * msg)
{
  if (msg) {
    project_interface__action__Controller_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
project_interface__action__Controller_SendGoal_Request__Sequence__init(project_interface__action__Controller_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interface__action__Controller_SendGoal_Request * data = NULL;
  if (size) {
    data = (project_interface__action__Controller_SendGoal_Request *)calloc(size, sizeof(project_interface__action__Controller_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interface__action__Controller_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interface__action__Controller_SendGoal_Request__fini(&data[i - 1]);
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
project_interface__action__Controller_SendGoal_Request__Sequence__fini(project_interface__action__Controller_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interface__action__Controller_SendGoal_Request__fini(&array->data[i]);
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

project_interface__action__Controller_SendGoal_Request__Sequence *
project_interface__action__Controller_SendGoal_Request__Sequence__create(size_t size)
{
  project_interface__action__Controller_SendGoal_Request__Sequence * array = (project_interface__action__Controller_SendGoal_Request__Sequence *)malloc(sizeof(project_interface__action__Controller_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interface__action__Controller_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interface__action__Controller_SendGoal_Request__Sequence__destroy(project_interface__action__Controller_SendGoal_Request__Sequence * array)
{
  if (array) {
    project_interface__action__Controller_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
project_interface__action__Controller_SendGoal_Response__init(project_interface__action__Controller_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    project_interface__action__Controller_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
project_interface__action__Controller_SendGoal_Response__fini(project_interface__action__Controller_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

project_interface__action__Controller_SendGoal_Response *
project_interface__action__Controller_SendGoal_Response__create()
{
  project_interface__action__Controller_SendGoal_Response * msg = (project_interface__action__Controller_SendGoal_Response *)malloc(sizeof(project_interface__action__Controller_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interface__action__Controller_SendGoal_Response));
  bool success = project_interface__action__Controller_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interface__action__Controller_SendGoal_Response__destroy(project_interface__action__Controller_SendGoal_Response * msg)
{
  if (msg) {
    project_interface__action__Controller_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
project_interface__action__Controller_SendGoal_Response__Sequence__init(project_interface__action__Controller_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interface__action__Controller_SendGoal_Response * data = NULL;
  if (size) {
    data = (project_interface__action__Controller_SendGoal_Response *)calloc(size, sizeof(project_interface__action__Controller_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interface__action__Controller_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interface__action__Controller_SendGoal_Response__fini(&data[i - 1]);
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
project_interface__action__Controller_SendGoal_Response__Sequence__fini(project_interface__action__Controller_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interface__action__Controller_SendGoal_Response__fini(&array->data[i]);
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

project_interface__action__Controller_SendGoal_Response__Sequence *
project_interface__action__Controller_SendGoal_Response__Sequence__create(size_t size)
{
  project_interface__action__Controller_SendGoal_Response__Sequence * array = (project_interface__action__Controller_SendGoal_Response__Sequence *)malloc(sizeof(project_interface__action__Controller_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interface__action__Controller_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interface__action__Controller_SendGoal_Response__Sequence__destroy(project_interface__action__Controller_SendGoal_Response__Sequence * array)
{
  if (array) {
    project_interface__action__Controller_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
project_interface__action__Controller_GetResult_Request__init(project_interface__action__Controller_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    project_interface__action__Controller_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
project_interface__action__Controller_GetResult_Request__fini(project_interface__action__Controller_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

project_interface__action__Controller_GetResult_Request *
project_interface__action__Controller_GetResult_Request__create()
{
  project_interface__action__Controller_GetResult_Request * msg = (project_interface__action__Controller_GetResult_Request *)malloc(sizeof(project_interface__action__Controller_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interface__action__Controller_GetResult_Request));
  bool success = project_interface__action__Controller_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interface__action__Controller_GetResult_Request__destroy(project_interface__action__Controller_GetResult_Request * msg)
{
  if (msg) {
    project_interface__action__Controller_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
project_interface__action__Controller_GetResult_Request__Sequence__init(project_interface__action__Controller_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interface__action__Controller_GetResult_Request * data = NULL;
  if (size) {
    data = (project_interface__action__Controller_GetResult_Request *)calloc(size, sizeof(project_interface__action__Controller_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interface__action__Controller_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interface__action__Controller_GetResult_Request__fini(&data[i - 1]);
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
project_interface__action__Controller_GetResult_Request__Sequence__fini(project_interface__action__Controller_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interface__action__Controller_GetResult_Request__fini(&array->data[i]);
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

project_interface__action__Controller_GetResult_Request__Sequence *
project_interface__action__Controller_GetResult_Request__Sequence__create(size_t size)
{
  project_interface__action__Controller_GetResult_Request__Sequence * array = (project_interface__action__Controller_GetResult_Request__Sequence *)malloc(sizeof(project_interface__action__Controller_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interface__action__Controller_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interface__action__Controller_GetResult_Request__Sequence__destroy(project_interface__action__Controller_GetResult_Request__Sequence * array)
{
  if (array) {
    project_interface__action__Controller_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "project_interface/action/detail/controller__functions.h"

bool
project_interface__action__Controller_GetResult_Response__init(project_interface__action__Controller_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!project_interface__action__Controller_Result__init(&msg->result)) {
    project_interface__action__Controller_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
project_interface__action__Controller_GetResult_Response__fini(project_interface__action__Controller_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  project_interface__action__Controller_Result__fini(&msg->result);
}

project_interface__action__Controller_GetResult_Response *
project_interface__action__Controller_GetResult_Response__create()
{
  project_interface__action__Controller_GetResult_Response * msg = (project_interface__action__Controller_GetResult_Response *)malloc(sizeof(project_interface__action__Controller_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interface__action__Controller_GetResult_Response));
  bool success = project_interface__action__Controller_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interface__action__Controller_GetResult_Response__destroy(project_interface__action__Controller_GetResult_Response * msg)
{
  if (msg) {
    project_interface__action__Controller_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
project_interface__action__Controller_GetResult_Response__Sequence__init(project_interface__action__Controller_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interface__action__Controller_GetResult_Response * data = NULL;
  if (size) {
    data = (project_interface__action__Controller_GetResult_Response *)calloc(size, sizeof(project_interface__action__Controller_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interface__action__Controller_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interface__action__Controller_GetResult_Response__fini(&data[i - 1]);
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
project_interface__action__Controller_GetResult_Response__Sequence__fini(project_interface__action__Controller_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interface__action__Controller_GetResult_Response__fini(&array->data[i]);
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

project_interface__action__Controller_GetResult_Response__Sequence *
project_interface__action__Controller_GetResult_Response__Sequence__create(size_t size)
{
  project_interface__action__Controller_GetResult_Response__Sequence * array = (project_interface__action__Controller_GetResult_Response__Sequence *)malloc(sizeof(project_interface__action__Controller_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interface__action__Controller_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interface__action__Controller_GetResult_Response__Sequence__destroy(project_interface__action__Controller_GetResult_Response__Sequence * array)
{
  if (array) {
    project_interface__action__Controller_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "project_interface/action/detail/controller__functions.h"

bool
project_interface__action__Controller_FeedbackMessage__init(project_interface__action__Controller_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    project_interface__action__Controller_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!project_interface__action__Controller_Feedback__init(&msg->feedback)) {
    project_interface__action__Controller_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
project_interface__action__Controller_FeedbackMessage__fini(project_interface__action__Controller_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  project_interface__action__Controller_Feedback__fini(&msg->feedback);
}

project_interface__action__Controller_FeedbackMessage *
project_interface__action__Controller_FeedbackMessage__create()
{
  project_interface__action__Controller_FeedbackMessage * msg = (project_interface__action__Controller_FeedbackMessage *)malloc(sizeof(project_interface__action__Controller_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interface__action__Controller_FeedbackMessage));
  bool success = project_interface__action__Controller_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interface__action__Controller_FeedbackMessage__destroy(project_interface__action__Controller_FeedbackMessage * msg)
{
  if (msg) {
    project_interface__action__Controller_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
project_interface__action__Controller_FeedbackMessage__Sequence__init(project_interface__action__Controller_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interface__action__Controller_FeedbackMessage * data = NULL;
  if (size) {
    data = (project_interface__action__Controller_FeedbackMessage *)calloc(size, sizeof(project_interface__action__Controller_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interface__action__Controller_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interface__action__Controller_FeedbackMessage__fini(&data[i - 1]);
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
project_interface__action__Controller_FeedbackMessage__Sequence__fini(project_interface__action__Controller_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interface__action__Controller_FeedbackMessage__fini(&array->data[i]);
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

project_interface__action__Controller_FeedbackMessage__Sequence *
project_interface__action__Controller_FeedbackMessage__Sequence__create(size_t size)
{
  project_interface__action__Controller_FeedbackMessage__Sequence * array = (project_interface__action__Controller_FeedbackMessage__Sequence *)malloc(sizeof(project_interface__action__Controller_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interface__action__Controller_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interface__action__Controller_FeedbackMessage__Sequence__destroy(project_interface__action__Controller_FeedbackMessage__Sequence * array)
{
  if (array) {
    project_interface__action__Controller_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
