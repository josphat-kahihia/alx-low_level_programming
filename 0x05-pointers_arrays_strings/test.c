#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    char *str2;
    char *str3;
    int len;
    int num;

    str = "My first atoi!";
    str2 = "+ + -1234567 aaaa 334";
    str3 = "--2345";
    printf("%s\n\n", str);
    len = _strlen(str2);
    printf("Size using _strlen is: %d\n", len);
    num = _atoi(str2);
    if (num < 0)
	    printf("_atoi() failed: %d. Check error messages\n", num);
    else
	    printf("The number (from string \"%s\") is: %d\n\n", str2, num);

    printf("Size using _strlen is: %d\n", _strlen(str3));
    printf("The number (from string \"%s\") is: %d\n", str3, _atoi(str3));
    return (0);
}
