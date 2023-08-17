#include "lists.h"
/**
 * dlistint_len -  function that prints all the elements of a dlistint_t list
 * @h: a pointer to list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t count = 0;
	const dlistint_t *tmp = h;

	while (tmp)

	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
