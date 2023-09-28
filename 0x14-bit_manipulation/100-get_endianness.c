#include "main.h"

/**
 * get_endianness - Function that checks the endianness.
 * Return: ) if bg endian, 1 if small endian.
 */

int get_endianness(void)
{
unsigned int z = 1;
unsigned char *x = (unsigned char *)&z;
return (int)*z == 1 ? 1 : 0;
}
