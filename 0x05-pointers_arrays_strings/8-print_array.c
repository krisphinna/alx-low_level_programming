#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of an array
 * @a: array input
 * @n: array input
 * Return: 0 Always
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
