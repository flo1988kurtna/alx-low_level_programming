#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to append to
 * @src: The source string to append
 *
 * Return: A pointer to the resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Move the pointer to the end of the destination string */
    while (*ptr)
    {
        ptr++;
    }

    /* Append the source string to the destination */
    while (*src)
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    /* Null-terminate the concatenated string */
    *ptr = '\0';

    return (dest); // Added parentheses for clarity
}

