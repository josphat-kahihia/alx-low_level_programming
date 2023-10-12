#include "main.h"

/**
 * jack_bauer - prints all minutes of a day in hh:mm
 *
 * return: void
 */

void jack_bauer(void)
{
	int H;
	int h;
	int M;
	int m;
	int h_max;
	
	for(H=0; H<3; H++)
	{
		if (H > 2)
			h_max = 4;
		else
			h_max = 9;
		
		for(h=0; h < h_max; h++)
		{
			for(M=0; M < 6; M++)
			{
				for(m=0; m < 10; m++)
				{
					_putchar(H);
					_putchar(h);
					_putchar(':');
					_putchar(M);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}

