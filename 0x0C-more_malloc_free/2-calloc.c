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
void *mem;
char *filler;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

mem = malloc(size * nmemb);

if (mem == NULL)
return (NULL);

filler = mem;

for (i = 0; i < (size * nmemb); i++)
filler[i] = '\0';
return (mem);

}
