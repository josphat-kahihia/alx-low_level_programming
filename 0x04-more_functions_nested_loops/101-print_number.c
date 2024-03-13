#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer value passed on to be printed using _putchar
 *
 * Description: The function recursively checks whether all digits have been
 * printed, effectively making sure that it prints from the smallest (one's)
 * to the very-left end of the number.
 * Note(1) - The n is not modified in either the recursive function call or
 * the printing statement, as that would lead to incorrect results.
 * Note(2) - The use of modulus in the statement acts as a guard, to prevent
 * the printing of a char that isn't a number.
 *
 * Example: Given 123456 as n, the function while make recursive calls
 * starting with print_number 12345, then 1234, then 123, then 12, then 1,
 * and as each recursive call starts to get satisfied - starting with the first
 * one (1), it will print the next number, (2), and so on, until it returns to
 * the initial one's value (6). Now that each digit has been printed in
 * succession, we will have 123456.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
