#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint list and sets the head to NULL
 * @head: double pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
