#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 *
 * Return: A pointer to the allocated memory
 *	   If nmemb or size is 0, returns NULL
 *	   If malloc fails, returns NULL
 *	   The memory is set to zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int total_size;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}
