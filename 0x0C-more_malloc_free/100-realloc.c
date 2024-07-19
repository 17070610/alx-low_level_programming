#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: The size, in bytes of the allocated space for ptr
 * @new_size: The new size in bytes of the new memory block
 *
 * Return: A pointer to the newly allocated memory block
 *	   If new_size == old_size, returns ptr
 *	   if ptr is NULL, equivalent to malloc(new_size)
 *	   if new_size is 0 and ptr is not NULL, equivalent to free(ptr)
 *	   if malloc fails, returns NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, min_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}
