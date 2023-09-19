#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			/* Check for integer overflow */
			if (result > (INT_MAX - digit) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			result = result * 10 + digit;
		}
		else if (*s == '+')
		{
			/* Handle the '+' sign */
		}
		else if (result != 0)
		{
			/* Stop parsing if non-digit characters appear after a number */
			break;
		}

		s++;
	}

	return (result * sign);
}

