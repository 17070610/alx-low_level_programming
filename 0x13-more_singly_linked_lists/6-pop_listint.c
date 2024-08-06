#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of the listint_t and returns it's data
 * @head: Double pointer to the head of the list
 *
 * Return: The data of the head or 0 if it's NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
