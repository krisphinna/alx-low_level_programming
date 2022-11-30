#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t
 * @head: pointer to the listint_t struct
 * @index: the index of the node straigth at 0
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
