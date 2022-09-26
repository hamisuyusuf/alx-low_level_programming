#include "main.h"

/**
 *  print_diagsums - a function that prints the sum of the two diagonals of a square matrix of integers.
 *  @a: ointer.
 *  @size: size of the matrix
 *  Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int k, sum1 = 0, sum2 = 0;

	for (k = 0; k < (size * size); k++)
	{
		if (k % (size + 1) == 0)
			sum1 += *(a + k);
		if (k % (size - 1) == 0 && k != 0 && k < size * size - 1)
			sum2 += *(a + k);
	}
	printf("%d, %d\n", sum1, sum2);
}
