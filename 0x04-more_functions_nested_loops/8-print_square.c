#include "main.h"

/**
 * print_square - prints a square using # character
 * @size: The size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int r, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		r = 1;
		while (r <= size)
		{
			p = 1;
			while (p <= size)
			{
				_putchar('#');
				p++;
			}
			_putchar('\n');
			r++;
		}
	}
}
