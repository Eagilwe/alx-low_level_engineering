#include "main.h"

/**
 * flip-bits - function that allows one to move to the next bit.
 * @n: Number of bits required to flip to next bit.
 * @m: 'Next' bit.
 * Return: Next Bit.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int mz = 0;
unsigned long int mzd;
mzd = n ^ m;
do
{
mz += (mzd & 1);
mzd >>= 1;
}while
(mzd >0);
return (mz);
}
