#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: min integers
 * @max: max integers
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *new_arr;
	int diff, i = 0;

	if (min > max)
		return (NULL);
	diff = max - min;
	new_arr = malloc((diff + 1) * sizeof(int));
	if (new_arr == NULL)
		return (NULL);
	for (; i <= diff; i++)
		new_arr[i] = min++;
	return (new_arr);
}
