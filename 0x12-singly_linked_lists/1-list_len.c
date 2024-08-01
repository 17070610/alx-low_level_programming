#include "lists.h"

/**
 * list_len - Returns the number of elementa ina linked list
 * @h: The list_t list
 *
 * Return: The number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
