#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Search for a set of bytes in a string.
 * @s: The string to search.
 * @accept: The bytes to search for.
 *
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}

