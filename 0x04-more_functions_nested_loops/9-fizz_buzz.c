#include <stdio.h>

/**
 * main - fizzbuzz
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 1;
	int m3, m5;

	while (n <= 100)
	{
		m3 = n % 3;
		m5 = n % 5;
		if ((m3 == 0) && (m5 == 0))
		{
			printf("FizzBuzz ");
			n++;
		}
		else if (m3 == 0)
		{
			printf("Fizz ");
			n++;
		}
		else if (m5 == 0)
		{
			printf("Buzz ");
			n++;
		}
		else if ((n == 100) && (m5 == 0))
		{
			printf("Buzz");
			n++;
		}
		else
		{
			printf("%d ", n);
			n++;
		}
	}
	printf("\n");

	return (0);
}
