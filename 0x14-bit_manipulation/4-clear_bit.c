#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to zero at given index.
 * @n: Pointer to bit.
 * @index: Location of bit.
 * Return: Succes (1), Failure (-1).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mz;
unsigned long int mask = 1;
mz = (sizeof(unsigned lont int) * 8);
if (index > mz)
return (-1);
mask = ~(mask << index);
*n = (*n & mask);
return (1);
}
