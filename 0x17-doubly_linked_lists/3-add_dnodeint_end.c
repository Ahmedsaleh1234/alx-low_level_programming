#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = (*head);

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (tmp == NULL)
	{
		newnode->prev = NULL;
		newnode->next = (*head);
		*head = newnode;

	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		newnode->prev = tmp;
		tmp->next = newnode;
		newnode->next = NULL;

	}
	return (newnode);
}
