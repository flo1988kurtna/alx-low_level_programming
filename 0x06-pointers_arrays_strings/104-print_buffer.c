#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print from the buffer.
 *
 * Description: This function prints the content of a buffer in a specific
 * format, showing the hexadecimal values and printable characters.
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if (j + i >= size)
                printf("  ");
            else
                printf("%02x", b[i + j]);

            if (j % 2 == 1)
                printf(" ");
        }

        for (j = 0; j < 10; j++)
        {
            if (j + i >= size)
                break;

            if (b[i + j] >= 32 && b[i + j] <= 126)
                printf("%c", b[i + j]);
            else
                printf(".");
        }

        printf("\n");
    }
}

