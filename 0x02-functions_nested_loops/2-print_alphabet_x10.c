#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * return: 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i=0; i<10; i++)
	{
		char c = 97;

		while (c < 123)
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
	}

	return;
}
