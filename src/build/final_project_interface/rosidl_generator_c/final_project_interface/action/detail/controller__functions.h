// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from final_project_interface:action/Controller.idl
// generated code does not contain a copyright notice

#ifndef FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__FUNCTIONS_H_
#define FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "final_project_interface/msg/rosidl_generator_c__visibility_control.h"

#include "final_project_interface/action/detail/controller__struct.h"

/// Initialize action/Controller message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * final_project_interface__action__Controller_Goal
 * )) before or use
 * final_project_interface__action__Controller_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_Goal__init(final_project_interface__action__Controller_Goal * msg);

/// Finalize action/Controller message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Goal__fini(final_project_interface__action__Controller_Goal * msg);

/// Create action/Controller message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * final_project_interface__action__Controller_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_Goal *
final_project_interface__action__Controller_Goal__create();

/// Destroy action/Controller message.
/**
 * It calls
 * final_project_interface__action__Controller_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Goal__destroy(final_project_interface__action__Controller_Goal * msg);


/// Initialize array of action/Controller messages.
/**
 * It allocates the memory for the number of elements and calls
 * final_project_interface__action__Controller_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_Goal__Sequence__init(final_project_interface__action__Controller_Goal__Sequence * array, size_t size);

/// Finalize array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Goal__Sequence__fini(final_project_interface__action__Controller_Goal__Sequence * array);

/// Create array of action/Controller messages.
/**
 * It allocates the memory for the array and calls
 * final_project_interface__action__Controller_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_Goal__Sequence *
final_project_interface__action__Controller_Goal__Sequence__create(size_t size);

/// Destroy array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Goal__Sequence__destroy(final_project_interface__action__Controller_Goal__Sequence * array);

/// Initialize action/Controller message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * final_project_interface__action__Controller_Result
 * )) before or use
 * final_project_interface__action__Controller_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_Result__init(final_project_interface__action__Controller_Result * msg);

/// Finalize action/Controller message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Result__fini(final_project_interface__action__Controller_Result * msg);

/// Create action/Controller message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * final_project_interface__action__Controller_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_Result *
final_project_interface__action__Controller_Result__create();

/// Destroy action/Controller message.
/**
 * It calls
 * final_project_interface__action__Controller_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Result__destroy(final_project_interface__action__Controller_Result * msg);


/// Initialize array of action/Controller messages.
/**
 * It allocates the memory for the number of elements and calls
 * final_project_interface__action__Controller_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_Result__Sequence__init(final_project_interface__action__Controller_Result__Sequence * array, size_t size);

/// Finalize array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Result__Sequence__fini(final_project_interface__action__Controller_Result__Sequence * array);

/// Create array of action/Controller messages.
/**
 * It allocates the memory for the array and calls
 * final_project_interface__action__Controller_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_Result__Sequence *
final_project_interface__action__Controller_Result__Sequence__create(size_t size);

/// Destroy array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Result__Sequence__destroy(final_project_interface__action__Controller_Result__Sequence * array);

/// Initialize action/Controller message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * final_project_interface__action__Controller_Feedback
 * )) before or use
 * final_project_interface__action__Controller_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_Feedback__init(final_project_interface__action__Controller_Feedback * msg);

/// Finalize action/Controller message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Feedback__fini(final_project_interface__action__Controller_Feedback * msg);

/// Create action/Controller message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * final_project_interface__action__Controller_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_Feedback *
final_project_interface__action__Controller_Feedback__create();

/// Destroy action/Controller message.
/**
 * It calls
 * final_project_interface__action__Controller_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Feedback__destroy(final_project_interface__action__Controller_Feedback * msg);


/// Initialize array of action/Controller messages.
/**
 * It allocates the memory for the number of elements and calls
 * final_project_interface__action__Controller_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_Feedback__Sequence__init(final_project_interface__action__Controller_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Feedback__Sequence__fini(final_project_interface__action__Controller_Feedback__Sequence * array);

/// Create array of action/Controller messages.
/**
 * It allocates the memory for the array and calls
 * final_project_interface__action__Controller_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_Feedback__Sequence *
final_project_interface__action__Controller_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_Feedback__Sequence__destroy(final_project_interface__action__Controller_Feedback__Sequence * array);

/// Initialize action/Controller message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * final_project_interface__action__Controller_SendGoal_Request
 * )) before or use
 * final_project_interface__action__Controller_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_SendGoal_Request__init(final_project_interface__action__Controller_SendGoal_Request * msg);

/// Finalize action/Controller message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_SendGoal_Request__fini(final_project_interface__action__Controller_SendGoal_Request * msg);

/// Create action/Controller message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * final_project_interface__action__Controller_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_SendGoal_Request *
final_project_interface__action__Controller_SendGoal_Request__create();

/// Destroy action/Controller message.
/**
 * It calls
 * final_project_interface__action__Controller_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_SendGoal_Request__destroy(final_project_interface__action__Controller_SendGoal_Request * msg);


/// Initialize array of action/Controller messages.
/**
 * It allocates the memory for the number of elements and calls
 * final_project_interface__action__Controller_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_SendGoal_Request__Sequence__init(final_project_interface__action__Controller_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_SendGoal_Request__Sequence__fini(final_project_interface__action__Controller_SendGoal_Request__Sequence * array);

/// Create array of action/Controller messages.
/**
 * It allocates the memory for the array and calls
 * final_project_interface__action__Controller_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_SendGoal_Request__Sequence *
final_project_interface__action__Controller_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_SendGoal_Request__Sequence__destroy(final_project_interface__action__Controller_SendGoal_Request__Sequence * array);

/// Initialize action/Controller message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * final_project_interface__action__Controller_SendGoal_Response
 * )) before or use
 * final_project_interface__action__Controller_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_SendGoal_Response__init(final_project_interface__action__Controller_SendGoal_Response * msg);

/// Finalize action/Controller message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_SendGoal_Response__fini(final_project_interface__action__Controller_SendGoal_Response * msg);

/// Create action/Controller message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * final_project_interface__action__Controller_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_SendGoal_Response *
final_project_interface__action__Controller_SendGoal_Response__create();

/// Destroy action/Controller message.
/**
 * It calls
 * final_project_interface__action__Controller_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_SendGoal_Response__destroy(final_project_interface__action__Controller_SendGoal_Response * msg);


/// Initialize array of action/Controller messages.
/**
 * It allocates the memory for the number of elements and calls
 * final_project_interface__action__Controller_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_SendGoal_Response__Sequence__init(final_project_interface__action__Controller_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_SendGoal_Response__Sequence__fini(final_project_interface__action__Controller_SendGoal_Response__Sequence * array);

/// Create array of action/Controller messages.
/**
 * It allocates the memory for the array and calls
 * final_project_interface__action__Controller_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_SendGoal_Response__Sequence *
final_project_interface__action__Controller_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_SendGoal_Response__Sequence__destroy(final_project_interface__action__Controller_SendGoal_Response__Sequence * array);

/// Initialize action/Controller message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * final_project_interface__action__Controller_GetResult_Request
 * )) before or use
 * final_project_interface__action__Controller_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_GetResult_Request__init(final_project_interface__action__Controller_GetResult_Request * msg);

/// Finalize action/Controller message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_GetResult_Request__fini(final_project_interface__action__Controller_GetResult_Request * msg);

/// Create action/Controller message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * final_project_interface__action__Controller_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_GetResult_Request *
final_project_interface__action__Controller_GetResult_Request__create();

/// Destroy action/Controller message.
/**
 * It calls
 * final_project_interface__action__Controller_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_GetResult_Request__destroy(final_project_interface__action__Controller_GetResult_Request * msg);


/// Initialize array of action/Controller messages.
/**
 * It allocates the memory for the number of elements and calls
 * final_project_interface__action__Controller_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_GetResult_Request__Sequence__init(final_project_interface__action__Controller_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_GetResult_Request__Sequence__fini(final_project_interface__action__Controller_GetResult_Request__Sequence * array);

/// Create array of action/Controller messages.
/**
 * It allocates the memory for the array and calls
 * final_project_interface__action__Controller_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_GetResult_Request__Sequence *
final_project_interface__action__Controller_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_GetResult_Request__Sequence__destroy(final_project_interface__action__Controller_GetResult_Request__Sequence * array);

/// Initialize action/Controller message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * final_project_interface__action__Controller_GetResult_Response
 * )) before or use
 * final_project_interface__action__Controller_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_GetResult_Response__init(final_project_interface__action__Controller_GetResult_Response * msg);

/// Finalize action/Controller message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_GetResult_Response__fini(final_project_interface__action__Controller_GetResult_Response * msg);

/// Create action/Controller message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * final_project_interface__action__Controller_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_GetResult_Response *
final_project_interface__action__Controller_GetResult_Response__create();

/// Destroy action/Controller message.
/**
 * It calls
 * final_project_interface__action__Controller_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_GetResult_Response__destroy(final_project_interface__action__Controller_GetResult_Response * msg);


/// Initialize array of action/Controller messages.
/**
 * It allocates the memory for the number of elements and calls
 * final_project_interface__action__Controller_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_GetResult_Response__Sequence__init(final_project_interface__action__Controller_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_GetResult_Response__Sequence__fini(final_project_interface__action__Controller_GetResult_Response__Sequence * array);

/// Create array of action/Controller messages.
/**
 * It allocates the memory for the array and calls
 * final_project_interface__action__Controller_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_GetResult_Response__Sequence *
final_project_interface__action__Controller_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_GetResult_Response__Sequence__destroy(final_project_interface__action__Controller_GetResult_Response__Sequence * array);

/// Initialize action/Controller message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * final_project_interface__action__Controller_FeedbackMessage
 * )) before or use
 * final_project_interface__action__Controller_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_FeedbackMessage__init(final_project_interface__action__Controller_FeedbackMessage * msg);

/// Finalize action/Controller message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_FeedbackMessage__fini(final_project_interface__action__Controller_FeedbackMessage * msg);

/// Create action/Controller message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * final_project_interface__action__Controller_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_FeedbackMessage *
final_project_interface__action__Controller_FeedbackMessage__create();

/// Destroy action/Controller message.
/**
 * It calls
 * final_project_interface__action__Controller_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_FeedbackMessage__destroy(final_project_interface__action__Controller_FeedbackMessage * msg);


/// Initialize array of action/Controller messages.
/**
 * It allocates the memory for the number of elements and calls
 * final_project_interface__action__Controller_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
bool
final_project_interface__action__Controller_FeedbackMessage__Sequence__init(final_project_interface__action__Controller_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_FeedbackMessage__Sequence__fini(final_project_interface__action__Controller_FeedbackMessage__Sequence * array);

/// Create array of action/Controller messages.
/**
 * It allocates the memory for the array and calls
 * final_project_interface__action__Controller_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
final_project_interface__action__Controller_FeedbackMessage__Sequence *
final_project_interface__action__Controller_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Controller messages.
/**
 * It calls
 * final_project_interface__action__Controller_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_final_project_interface
void
final_project_interface__action__Controller_FeedbackMessage__Sequence__destroy(final_project_interface__action__Controller_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__FUNCTIONS_H_
