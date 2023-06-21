#include "function_pointers.h"


/**
 * print_name - print a name
 * @name: the name of person
 * @f: a pointer to function
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
