#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: The pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for in the array
 *
 * Return: The index where the value is located, Otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
