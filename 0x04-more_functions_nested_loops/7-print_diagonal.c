#include "main.h"

/**
 *print_diagonal - print \
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;
	
	if(n>1)
	{
		for (i=1; i<=n; i++)
			{
				for (j=1; j<i; j++)
					{
						_putchar(32);
					}
				_putchar(92);
				_putchar('\n');
			}
	}
	else
	{
		_putchar('\n');
	}
}
