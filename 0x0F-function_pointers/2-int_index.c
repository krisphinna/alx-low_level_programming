#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @array: pointer to array
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	if (i == size)
		return (-1);
	return (-1);
}
