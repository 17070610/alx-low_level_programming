#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: The head of the linked listint_t list
 *
 * Return: The number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
