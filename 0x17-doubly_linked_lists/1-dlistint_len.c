#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: a pointer to list
 * Return:  the number of elements in a linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		cont++;
		tmp = tmp->next;
	}
	return (cont);
}
