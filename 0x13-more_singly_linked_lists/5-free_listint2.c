#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the head of the list
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *tmp, *p;
if (!head)
{
return;
}
p = *head;
while (p)
{
tmp = p;
p = p->next;
free(tmp);
}
*head = NULL;

}
