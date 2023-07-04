#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: is a pointer to list
 *
 * Return:  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i;
const listint_t *s;
s = h;
i = 0;
while (s)
{
printf("%d\n", s->n);
s = s->next;
i++;
}
return (i);
}
