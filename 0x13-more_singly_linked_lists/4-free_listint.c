#include "lists.h"
/**
 * free_listint - function that frees a list
 *
 * @head: a pointer to list
 * Return: no thing
 */

void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head;
head = head->next;
free(tmp);
}
}
