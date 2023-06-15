#include "main.h"

/**
 * malloc_checked - allocate memory using mallco, exit if it fails
 * @b: the size which will be allocated
 *
 * Return: pointer to the adress of memory allocated
 */

void *malloc_checked(unsigned int b)
{
int *m = malloc(b);
if (m == 0)
{
exit(98);
}
return (m);
}
