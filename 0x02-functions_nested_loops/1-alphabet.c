#include "main.h"

/**
 * void print_alphabet - prints alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c = 97;

	while (c < 123)
	{
		_putchar(*c);
		c++;
	}

	_putchar('\n');
	
	return;
}
