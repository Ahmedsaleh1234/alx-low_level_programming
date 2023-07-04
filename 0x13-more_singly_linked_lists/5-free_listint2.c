#include "lists.h"
/**
 * free_listint2 - unction that frees a list
 * @head: a pointer to head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{

listint_t *tmp, *p;
if (!head)
{
return;
}
p = *head;
while (*head != NULL)
{
tmp = *head;
p = p->next;

free(tmp);
}
*head = NULL;
}
