#include "lists.h"

/**
 * insert_dnodeint_at_index - a () that inserts a new node at a given position.
 * @h: double pointer to the head of list
 * @idx: is the index of the list where the new node should be added
 * @n: input to the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (!h || !(*h))
		*h = new_node;
	else
	{
		temp = *h;
		while (idx != i++ && temp->next)
			temp = temp->next;
		if (temp->next)
			new_node->prev = temp->prev;
		else
			new_node->prev = temp;
		if (idx == i)
			temp->next = new_node, new_node->prev = temp;
		else if (idx == i - 1)
		{
			if (temp->prev)
				temp->prev->next = new_node;
			else
				*h = new_node;
			temp->prev = new_node;
			new_node->next = temp;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);
}
