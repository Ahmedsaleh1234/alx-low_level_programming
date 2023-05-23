#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
*main - function prints text as output
*
*Return:return 0
*/

int main(void)
{
char c[] = "_putchar";
int i;
for (i = 0 ; i < 9 ; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return(0);
}
