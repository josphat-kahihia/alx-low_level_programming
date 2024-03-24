#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Description: Since the largest factor of a number is always less than it's
 * square root, we are minimizing the search space to x < the square root,
 * checking incrementally which number is the largest in that space that
 * perfectly divides the number n with no remainder.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long x;
	long f;

	long n = 612852475143;
	double square = sqrt(n);

	for (x = 1; x <= square; x++)
	{
		if (n % x == 0)
		{
			f = n / x;
		}
	}
	printf("%ld\n", f);

	return (0);
}
