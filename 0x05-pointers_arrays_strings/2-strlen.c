#include "main.h"
#include <string.h>

/**
 * _strlen - Finds the lenght of char array
 * @s: The array character to be checked when the function is called
 *
 * Return: Integer
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
		i++;

	return (i);
}
