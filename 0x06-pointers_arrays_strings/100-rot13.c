#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: The input string
 *
 * Return: A pointer to the resulting string
 */
char *rot13(char *str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = str;

	while (*ptr)
	{
		int i = 0;

		while (input[i])
		{
			if (*ptr == input[i])
			{
				*ptr = output[i];
				break;
			}
			i++;
		}

		ptr++;
	}

	return (str); /* Properly parenthesized return statement */
}

