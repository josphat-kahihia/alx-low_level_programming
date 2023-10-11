#include "main.h"

/**
 * int _printf - prints "_putchar"
 *
 * Return: 0
 *
 */

int main (void)
{
	char *s ="_putchar";

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	
	_putchar('\n');

	return (0);
}
