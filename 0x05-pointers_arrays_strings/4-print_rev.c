#include "main.h"
/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{
int i, j, ln;
i = 0;
while (s[i] != '\0')
{
i++;
}
ln = i;
for (j = ln; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
