#include "lists.h"

/**
 * delete_nodeint_at_index - a () to deletes the node at index of a listint_t
 * @head: pointer to the listint_t struct
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		del_node = temp;
		del_node = del_node->next;
		temp->next = del_node->next;
		free(del_node);
	}
	return (1);
}
