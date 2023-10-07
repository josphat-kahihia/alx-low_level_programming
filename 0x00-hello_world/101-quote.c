#include <stdio.h>

/**
 *  main - Print error
 *  Return: 1
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	for (i = 0; msg[i] != '\0'; i++)
		putchar(msg[i]);
	return (1);
}
