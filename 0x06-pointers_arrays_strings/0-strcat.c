#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	/* Calculate the length of dest */
	while (dest[dlen] != '\0')
	{
		dlen++;
	}

	/* Concatenate src to dest */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0'; /* Null-terminate the concatenated string */
	return (dest);
}

