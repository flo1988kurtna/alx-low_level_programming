#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
    int sum1 = 0;
    int sum2 = 0;
    int i;

    for (i = 0; i < size; i++) {
        /* Calculate the sum of the main diagonal */
        sum1 += *(a + i * size + i);

        /* Calculate the sum of the secondary diagonal */
        sum2 += *(a + i * size + (size - 1 - i));
    }

    printf("%d, %d\n", sum1, sum2);
}

