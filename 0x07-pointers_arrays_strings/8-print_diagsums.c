#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Calculate and print the sum of diagonals in a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the matrix
 *
 * Return: None
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

