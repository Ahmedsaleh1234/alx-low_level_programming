#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a list
 *
 * @head: is a pointer to list
 * @index: index of node to get
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int n;
node = head;


for (n = 0; node && n < index; n++)
{
node = node->next;
}

return (node);
}
