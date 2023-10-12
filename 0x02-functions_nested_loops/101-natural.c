#include <stdio.h>

/**
 * main - prints all the sum of the multipes of 3 and 5 below 1024
 *
 * Return: void
 */
int main(void)
{
	int a, sum = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum += a;
		}
		a++;
	}
	printf("%d\n", sum);

	return (0);
}
