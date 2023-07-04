#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));
listint_t *p = *head;
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
while (p->next)
{
p = p->next;
}
p->next = newnode;
}
return (newnode);
}
