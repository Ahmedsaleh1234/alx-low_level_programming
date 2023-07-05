#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n) of a list
 * @head: a pointer to frist node
 * Return: the sum of data
 */
int sum_listint(listint_t *head)
{
int sum;
sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
