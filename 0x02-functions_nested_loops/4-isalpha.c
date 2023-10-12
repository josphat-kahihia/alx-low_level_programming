#include "main.h"
  
/**
 * _isalpha - check if character is a letter
 *
 * return: 0
 */

int _islower(int c)
{
        if ((c > 64 && c < 91) || (c > 96 && c < 123))
                return (1);
        else
                return (0);
}

