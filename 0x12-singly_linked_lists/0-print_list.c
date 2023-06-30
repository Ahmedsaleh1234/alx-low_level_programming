#include "lists.h"

/**
 * size_t print_list - function that prints all the elements of a list_t list.
 * @h: is a pointer to list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
const list_t *a;
size_t count;
count = 0;
a = h;
while (a != NULL)
{
if (a->str == NULL)
{
printf("[0] (nil) \n");
}
else
{
printf("[%d] %s\n ", a->len, a->str);
}
a = a->next;
count++;
}
return (count);
}
