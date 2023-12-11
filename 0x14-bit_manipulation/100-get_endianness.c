#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: integer
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *b;

	b = (char *)&i;

	return (*b);
}
