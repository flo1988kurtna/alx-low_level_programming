#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value converted from the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	int has_digit = 0;  /* Flag to track if a valid digit is encountered */

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			if (has_digit)  /* Stop parsing if '-' is encountered after digits */
				break;
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			has_digit = 1;
			/* Check for integer overflow before updating result */
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
			{
				/* Handle overflow, return INT_MIN if negative, INT_MAX if positive */
				return (sign == -1) ? INT_MIN : INT_MAX;
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (has_digit)
		{
			break;  /* Stop parsing after encountering non-digit after digits */
		}
		i++;
	}

	return (result * sign);
}

