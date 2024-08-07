#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of all the data(n) of a listint_t linked list
 * @head: The pointer to the head of the list
 *
 * Return: The sum of the data(n) or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
