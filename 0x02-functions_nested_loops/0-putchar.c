#include "main.h"

/**
 * int _printf - prints "_putchar"
 *
 * Return: 0
 *
 */

int _printf (void)
{
	char *s ="_putchar";

	while (*s != \0)
	{
		_putchar(*s);
		*s++
	}


	return (0);
}
