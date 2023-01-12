#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - a () that prints all the elements of a double linked list
 * @h: head of the pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
