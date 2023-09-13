#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n; /* Make sure it's positive */

	int last_digit = n % 10; /* Calculate the last digit */

	_putchar('0' + last_digit); /* Print the last digit */
	return (last_digit);
}

