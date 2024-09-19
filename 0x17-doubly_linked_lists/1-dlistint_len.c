#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Finds and returns the length of a list
 * @h: head of the list
 *
 * Return: The length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
