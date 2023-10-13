#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int r, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (s = 1; s <= row - 1; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
