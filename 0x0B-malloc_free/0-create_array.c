#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates array of chars, and initialises
 * it with a specific char
 * @size: Size of an array
 * @c: The specific character
 *
 * Return: NULL if size = 0 or if it fails, Otherwise pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
