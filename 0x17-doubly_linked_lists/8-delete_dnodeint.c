#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - a () that deletes node at index of a linked list
 * @head: the double pointer to the head.
 * @index: is the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (!head || !(*head))
	{
		return (-1);
	}
	else
	{
		temp = *head;
		while (index != i++ && temp)
			temp = temp->next;
		if (!temp)
			return (-1);
		if (temp->next)
			temp->next->prev = temp->prev;
		if (index == 0)
			*head = temp->next;
		else
			temp->prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
