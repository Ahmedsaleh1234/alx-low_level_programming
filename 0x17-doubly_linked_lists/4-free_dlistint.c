#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
