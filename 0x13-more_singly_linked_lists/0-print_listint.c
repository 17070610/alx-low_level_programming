#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of the listint_t list
 * @h: The head of the listint_t list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t current = h;
	int count = 0;

	while (current != NULL)
	{
		printf("%d ", current->n);
		current = current->next;
		count++;
	}
	printf("\n");
	return (count);
}
