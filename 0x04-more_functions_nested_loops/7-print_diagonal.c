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
						putchar(32);
					}
				putchar(92);
				putchar('\n');
			}
	}
	else
	{
		putchar('\n');
	}
}
