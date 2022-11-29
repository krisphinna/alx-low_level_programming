#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a () to return the num of elements in a linked listint_t
 * @h: A poniter to listint_t
 * Return:  the number of elements in a linked listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
