#include "main.h"

/**
 * _calloc - function allocates memory for an array of nmemb elements of size
 *
 * @nmemb: the number off elements
 * @size: te size of elemnts
 * Return:  If nmemb = 0, size = 0, or the function fails - NULL
 * otherwise - a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *m;
m = calloc(nmemb, size);
if (nmemb == 0 || size == 0)
{
return (NULL);
}
else if (m == NULL)
{
return (NULL);
}
else
{
return (m);
}

}
