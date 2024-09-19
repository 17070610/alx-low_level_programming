#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list
 * @head: The pointer to the head of the list
 * @index: The index of the node to be returned
 *
 * Return: The node at the index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);
	else
		return (NULL);
}
