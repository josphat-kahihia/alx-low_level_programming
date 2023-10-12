#include "main.h"

/**
 * print_last_digit - outputs int mod 10
 *
 * return: int
 */

int print_last_digit(int n)
{
	int l;
	
	if (n < 0)
		n *= -1;

	l = n%10;

	_putchar('0' + l);
	
	return l;
}
