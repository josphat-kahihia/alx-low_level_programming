#include "main.h"

/**
 * _islower - check if character is a lowercase letter
 *
 * return: 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
