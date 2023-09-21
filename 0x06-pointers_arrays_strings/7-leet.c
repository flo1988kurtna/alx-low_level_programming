#include "main.h"

/**
 * leet - Encodes a string into "1337"
 * @str: The input string
 *
 * Return: A pointer to the resulting string
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_replace = "aAeEoOtTlL";
	char *leet_code = "4433007711";

	while (*ptr)
	{
		int i = 0;
		while (leet_replace[i])
		{
			if (*ptr == leet_replace[i])
			{
				*ptr = leet_code[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str); /* Properly parenthesized return statement */
}

