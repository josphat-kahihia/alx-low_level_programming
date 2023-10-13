#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: The size of the triangle according to height
 *
 * Return: void
 */
void print_triangle(int size)
{
	int r, s, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = 1; s <= size - r; s++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= r; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
