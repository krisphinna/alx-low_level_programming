#include "lists.h"

/**
 * get_dnodeint_at_index -  a () that returns the nth node of a linked list.
 * @head: pointer to the head f linked list
 * @index: the index of the node, starting from 0
 * Return: NULL, if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			break;
		head = head->next;
	}
	return (head);
}
