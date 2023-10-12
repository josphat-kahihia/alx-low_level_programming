#include "main.h"

/**
 * jack_bauer - prints all minutes of a day in hh:mm
 *
 * return: void
 */

void jack_bauer(void)
{
	char H;
	char h;
	char M;
	char m;
	char h_max;
	
	for(H=0; H<3; H++)
	{
		if (H > 1)
			h_max = 5;
		else
			h_max = 10;
		
		for(h=0; h < h_max; h++)
		{
			for(M=0; M < 6; M++)
			{
				for(m=0; m < 10; m++)
				{
					_putchar('0' + H);
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + M);
					_putchar('0' + m);
					_putchar('\n');
				}
			}
		}
	}
}

