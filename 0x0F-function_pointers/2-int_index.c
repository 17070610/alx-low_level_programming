#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: The array of integers
 * @size: size of an array
 * @cmp: A pointer to the function used to compare values
 *
 * Return: the index of the first element for which the cmp function does
 *	    does not return 0
 *	    -1 if no element matches, return -1
 *	    -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
