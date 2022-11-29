#include "lists.h"
#include <string.h>

/**
 * add_nodeint - a () that adds a new node at the start of a listint_t
 * @n: An integer to for the new nodes
 * @head: A pointer to the listint_t
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
