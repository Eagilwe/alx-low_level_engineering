#include "main.h"

/**
 * set_bit - Function that sets value of bit at an index to 1.
 * @n: Pointer to bit.
 * @index: Bit location.
 * Return: Success (1), Failure (-1).
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int mz;
unsigned long int mask = 1;
mz = (sizeof(unsigned long int) * 8);
if (index > mz)
return (-1);
mask <<= index;
*n = (*n | mask);
return (1);
}
