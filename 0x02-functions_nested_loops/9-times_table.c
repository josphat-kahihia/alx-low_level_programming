#include "main.h"

/**
 * times_table - prints a 9x9 table
 *
 * return: void
 */

void times_table(void)
{
	char i;
	char j;
	char n;

	for(i=0; i <10; i++)
	{
		for(j=0; j <10; j++)
		{
			n = i*j;

			if (n>10)
				_putchar((n / 10) + '0');

		      	_putchar((n % 10) + '0');

			if (j<9)
			{
		     		_putchar(',');
		     		_putchar(' ');
				if (n<10)
					_putchar(' ');
				
			}
		}

		_putchar('\n');
	}
	
	return;

}
