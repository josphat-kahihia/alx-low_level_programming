#include "main.h"

/**
 * times_table - prints a 9x9 table
 *
 * return: void
 */

void times_table(void)
{
	int i;
	int j;
	int n;

	for(i=0; i <10; i++)
	{
		for(j=0; j <10; j++)
		{
			n = i*j;
			_putchar('0' + n);
			_putchar(' ');
			
			if(n < 10)
				_putchar(' ');
			_putchar(',');
		}

		_putchar('\n');
	}
	
	return;

}
