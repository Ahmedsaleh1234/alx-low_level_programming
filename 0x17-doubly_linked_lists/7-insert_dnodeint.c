#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = (*h);
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	unsigned int index, con = 0;

	if (newnode == NULL)
	{
		return (NULL);
	}
	if ((*h) == NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	else
	{
		index = idx - 1;
		while (*h && con != index)
		{
			con++;
			tmp = tmp->next;
		}
		if (*h && con == index)
		{
			newnode->n = n;
			newnode->next = tmp->next;
			newnode->prev = tmp;
			tmp->next = newnode;
			return (newnode);
		}
	}
	free(newnode);
	return (NULL);
}
