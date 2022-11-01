#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input integers
 * @size: integer size
 * Return: 0 always
 */

void print_diagsums(int *a, int size)
{
	int i;
	int max = (size * size) - 1;
	unsigned int sum1 = 0;
	unsigned int sum2 = 0;

	for (i = 0; i <= max; i = i + (size + 1))
		sum1 = sum1 + a[i];

	for (i = (size - 1); i < max; i = i + (size - 1))
		sum2 = sum2 + a[i];
	printf("%d, %d\n", sum1, sum2);
}
