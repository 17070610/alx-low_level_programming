#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as a parameter
 *		    on each element of an array
 * @size: The size of an array
 * @array: The array to be worked on
 * @action: A pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
