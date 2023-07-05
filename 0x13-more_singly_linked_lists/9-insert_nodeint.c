#include "lists.h"
/**
 * insert_nodeint_at_index - that inserts a new node at a given position
 * @head: is a pointer to frist node
 * @idx:  is the index of the list where the new node should be added
 * @n: a value of newnode
 * Return:  an adress of newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newnode, *c;
unsigned int i;
c = *head;
i = 0;
newnode = malloc(sizeof(listint_t));
if (!head || !newnode)
{
return (NULL);
}
if (!idx)
{
newnode->n = n;
newnode->next = NULL;
*head = newnode;
return (NULL);
}
else
{
while (c)
{
if (i == idx - 1)
{
newnode->n = n;
newnode->next = c->next;
c->next = newnode;
return (newnode);
}
i++;
c = c->next;
}
}
free(newnode);
return (NULL);

}
