#include "main.h"

/**
 * swap_int -write a function that swap the value of two integers
 * @a: input integer pointer
 * @b: input integer pointer
 * Return: 0 Always
 */

void swap_int(int *a, int *b)
{
	int mid;

	mid = *a;
	*a = *b;
	*b = mid;
}
