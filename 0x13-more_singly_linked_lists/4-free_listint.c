#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer to the listint_t
 * Return: 0 always
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
