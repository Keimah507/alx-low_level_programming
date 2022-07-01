#include "lists.h"

/**
 * free_dlistint - frees a soubly linked list
 * @head: pointer to list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
