#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * power - calculates num to power exp
 * @num: The num
 * @exp: The power of num
 *
 * Return: The powered number
 */
int power(int num, int exp)
{
	int i;
	int result;

	result = 1;
	for (i = exp; i > 0; i--)
		result *= num;

	return (result);
}

/**
 * numsize - gets the size of the number
 * @n: The index of the start of the number
 *
 * Return: size
 */
int numsize(char *n)
{
	int size;
	int i;

	i = 0;
	while ((*(n + i) >= 48) && (*(n + i) <= 57))
	{
		size++;
		i++;
	}
	printf("The size of the number is: 10 ^ %d\n", size);
	return (size);
}

/**
 * getnum - creates the number
 * @n: The reference index of the start of the number
 * @numsize: Stores the size of the number
 *
 * Return: num if success, -1 if fail or -5 if number > INT_MAX
 */
int getnum(char *n)
{
	int i;
	int j;
	int num;
	int size;

	i = 0;
	num = 0;
	if ((*(n + i) >= 48) && (*(n + i) <= 57))
	{
		size = numsize((n + i));
		if (size > 10)
		{
			printf("Error: Size beyond INT_MAX\n");
			return (-5);
		}
		for (j = (size - 1); j >= 0 ; j--)
		{
			num += ((*(n + i) - '0') * power(10, j));
			if (num > INT_MAX)
			{
				printf("Error: Number too big for int\n");
				return (-5);
			}
			i++;
		}
		printf("Function getnum() output: %d\n", num);
		return (num);
	}
	else
	{
		printf("The index is not a number!\n");
		return (-1);
	}
}

/**
 * _atoi - Returns the integer value
 * @s: The string we're parsing to get our int
 *
 * Description: The function checks the eventual sign, then on finding an ASCII
 * number, calls getnum to get the number, then returns the number with it's
 * respective sign
 *
 * Return: number if success, -1 if fail, -2 if helper functions fail
 */
int _atoi(char *s)
{
	char *s_main;
	int i;
	int num;
	int pos;
	int neg;

	s_main = s;
	i = 0;
	pos = 0;
	neg = 0;
	while (*(s_main + i))
	{
		if (*(s_main + i) == 43) /* Positive sign */
			pos++;
		if (*(s_main + i) == 45) /* Negative sign */
			neg++;
		if ((*(s_main + i) >= 48) && (*(s_main + i) <= 57))
		{
			num = getnum((s_main + i));
			if (num < 0)
			{
				printf("Error: getnum() failed CODE: %d\n", num);
				return (-2);
			}
			if ((pos - neg) < 0)
				num *= -1;
			return num;
		}
		i++;
	}
	if ((*(s_main + i)) == '\0')
		printf("Error, no numbers found!\n");
	return (-1);
}
