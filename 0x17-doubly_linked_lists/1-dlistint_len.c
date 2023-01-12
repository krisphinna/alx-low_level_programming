#include "lists.h"

/**
 * dlistint_len - a () that returns the length of a linked list
 * @h: head of the pointer to list
 * Return: the number of element in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
