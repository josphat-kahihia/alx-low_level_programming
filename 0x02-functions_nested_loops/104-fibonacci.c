#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long i;
	unsigned long j;
	unsigned long sum;
	int f;

	i = 1;
	j = 2;
	sum = 0;
	f = 2;

	printf("%lu, ", i);
	printf("%lu, ", j);
	while (f <= 97)
	{
		sum = i + j;
		printf("%lu, ", sum);
		i = j;
		j = sum;
		f++;
	}
	sum = i + j;
	printf("%lu", sum);

	return (0);
}
