#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: The head of the linked listint_t list
 *
 * Return: The number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	listint_t current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
