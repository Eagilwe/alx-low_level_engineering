#include "main.h"

/**
 * get_endianness - Function that checks the endianness.
 * Return: ) if bg endian, 1 if small endian.
 */

int get_endianness(void) 
{
unsigned int num = 1;
unsigned char *byte = (unsigned char *)&num;
return (int)*byte == 1 ? 1 : 0;
}
