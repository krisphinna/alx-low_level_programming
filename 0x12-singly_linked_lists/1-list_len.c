#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list_t
 * @h: pointer to the head list
 * Return: 0 always
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
