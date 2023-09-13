#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0) /* Ensure it's non-negative */
		last_digit = -last_digit;

	_putchar('0' + last_digit); /* Print the last digit */
	return (last_digit);
}

