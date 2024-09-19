#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Prints all elements of dlistint_t
 * @h: head of the list
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		printf("%d", temp->n);
		temp = temp->next;
	}
	printf("\n");
	return (count);
}
