#include "main.h"

/**
 * swap_int - swaps the values of the two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
