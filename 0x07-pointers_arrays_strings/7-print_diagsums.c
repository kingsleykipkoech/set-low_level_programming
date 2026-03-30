#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
