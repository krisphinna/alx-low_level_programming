#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * @head: pointer to listint_t struct
 * Return: the head node’s data (n) and 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;

	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}

