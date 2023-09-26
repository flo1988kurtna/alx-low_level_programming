#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: The matrix of integers
 * @size: input
 * Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int i, n, sum1 = 0,  sum2 = 0;
	
	for (i = 0; i < size; i++) {
		sum1 += *(a + i * size + i);

		/* Calculate the sum of the secondary diagonal */
		sum2 += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum1, sum2);
}

