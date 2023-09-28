#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at given index.
 * @n: Value to be obtained
 * @index: Point where value is to be extracted (bit source).
 * Return: N if Succes, -1 if fail.
 */

int get_bit(unsigned long int n, unsigned int index)
{
int z;
unsigned int x;
x = (sizeof(unsigned long int) * 8);
if (index > x)
return (-1);
z = ((n >> index) & 1);
return (z);
}
