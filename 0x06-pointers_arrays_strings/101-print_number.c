#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Description: This function prints an integer to the standard output
 * using only the _putchar function. It handles both positive and negative
 * integers and does not use long, arrays, or pointers.
 */
void print_number(int n)
{
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0) {
        print_number(n / 10);
    }

    putchar((n % 10) + '0');
}

