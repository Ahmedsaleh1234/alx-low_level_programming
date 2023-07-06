#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number.
 * @m: another.
 * Return: number of bit to flip from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int num;
unsigned long int b;
int len;
len = (sizeof(num) * 8);
b = 0;
num = n ^ m;
while (len >= 0)
{
if (num & 1)
{
b++;
}
num = num >> 1;
len--;
}
return (b);

}
