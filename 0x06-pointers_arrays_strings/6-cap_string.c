#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 *
 * Return: A pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Capitalize the first character */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= ('a' - 'A');

	while (str[i])
	{
		/* Check for word separators and capitalize the next character */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ('a' - 'A');
		}
		else
		{
			i++;
		}
	}

	return str;
}

