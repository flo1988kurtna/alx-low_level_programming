#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0 through 9)
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	char is_digit = 0;

	if (c >= '0' && c <= '9')
		is_digit = 1;

	return (is_digit);
}


