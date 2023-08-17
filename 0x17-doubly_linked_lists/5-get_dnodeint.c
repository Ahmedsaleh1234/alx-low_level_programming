#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a dlistint_t linked list.
 * @head: is a pointer to list
 * @index: is an  index of the node
 * Return: nth node, if the node doesn't exist, returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont = 0;

	while (head && cont != index)
	{
		cont++;
		head = head->next;
	}
	if (head && cont == index)
	{
		return (head);
	}
	return (NULL);
}
