#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to an usigned int.
 * @b: Pointer to string of 0 and 1 chars.
 * Return: Binary if Successful, NULL if it failed.
 */

unsigned int binary_to_uint(const char *b)
{
int z = 0, x;
unsigned int c = 0;
if (b == NULL)
return (c);
while (b[z] != '\0')
z++;
z -= 1;
x = 0;
while (b[x])
{
if ((b[x] != '0') && (b[x] != '1'))
return (c);
if (b[x] == '1')
c += (1 * (1 << x));
x++;
z--;
}
return (c);
}
