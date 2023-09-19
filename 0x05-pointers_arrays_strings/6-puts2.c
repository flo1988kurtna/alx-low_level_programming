#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: A pointer to the string to be printed.
 *
 * Return: None.
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i += 2;
    }
    _putchar('\n');
}


