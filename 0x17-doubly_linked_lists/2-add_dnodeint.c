#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head:  a pointer to list
 * @n: a data which will be added
 * Return: void
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = newnode;
		newnode->next = (*head);
	}
	(*head) = newnode;
	return (newnode);


}
