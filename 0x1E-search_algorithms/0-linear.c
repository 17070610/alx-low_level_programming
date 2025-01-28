#include "search_algos.h"

/**
 * linear_search - It performs a linear search of an element 
 * 		   through the given array
 * array - The array to be searched through
 * size - The size of the array
 * value - The value to look for in the array
 * Return: The first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked on array[%lu] = [%d]\n")
		if (array[i] == value)
			return(i);
	}
	return (-1);
}
