#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t liss
 * @head: pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
