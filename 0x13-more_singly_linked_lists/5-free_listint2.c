#include "lists.h"
/**
 * free_listint2 - a function that frees a list
 *
 * @head: a pointer to list
 * Return: void
 */ 
void free_listint2(listint_t **head)
{
listint_t *tmp, *p;
if (!head)
return;
p = *head;
while (p)
{
tmp = *head;
p = p->next;
free(tmp);
}
*head = NULL;

}
