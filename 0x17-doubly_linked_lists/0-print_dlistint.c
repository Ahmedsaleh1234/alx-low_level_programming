#include "lists.h"
/**
 * print_dlistint -  function that prints all the elements of a dlistint_t list
 * @h: a pointer to list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{

	size_t count = 0;
	const dlistint_t *tmp = h;

	while (tmp)

	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
