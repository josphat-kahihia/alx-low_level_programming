#include "main.h"

/**
 * print_last_digit - outputs int mod 10
 *
 * return: int
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	int l = n%10;
	
	return l;
}
