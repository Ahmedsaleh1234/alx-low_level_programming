#include "lists.h"
/**
 * pop_listint -  function that deletes the head node of a list
 * @head: is apointer to list
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
listint_t *node;
int n;
if (!head || !*head)
{
return (0);
}
node = (*head)->next;
n = (*head)->n;
free(*head);
*head = node;
return (n);
}
