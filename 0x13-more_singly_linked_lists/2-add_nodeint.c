#include "lists.h"
/**
 * add_nodeint - add node in the beganing the linkedlist
 *
 * @head: pointer to list
 * @n: integer to be used as content
 * Return: the address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));
if (!head || !newnode)
{
return (NULL);
}
newnode->n = n;
if (*head == NULL)
{
newnode->next = NULL;
*head = newnode;
}
else
{
newnode->next = *head;
*head = newnode;
}
return (newnode);
}
