#include "lists.h"
/**
 * list_len -  function that returns the number of elements in a
 * linked list_t list.
 * @h: a pointer to linked list
 * Return:the number of elements
 */
size_t list_len(const list_t *h)
{
const list_t *p;
size_t elements;
p = h;
elements = 0;
while (p != NULL)
{
p = p->next;
elements++;
}
return (elements);
}
