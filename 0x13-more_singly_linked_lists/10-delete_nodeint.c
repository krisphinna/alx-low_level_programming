#include "lists.h"

/**
 * delete_nodeint_at_index - a () to deletes the node at index of a listint_t
 * @head: pointer to the listint_t struct
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del_node = *head;
	unsigned int node;

	if (del_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(del_node);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (del_node->next == NULL)
			return (-1);
		del_node = del_node->next;
	}
	temp = del_node->next;
	del_node->next = temp->next;
	free(del_node);
	return (1);
}

