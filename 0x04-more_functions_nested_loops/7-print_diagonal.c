#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;
	
	if(n>1)
	{
		for (i=1; i<=n; i++)
			{
				for (j=0; j<i; j++)
					{
						_putchar(32);
					}
				_putchar(92);
			}
	}
	_putchar('\n');
}
