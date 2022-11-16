#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given as
 * a  parameter on each element of an array.
 * @array: pointer to te array
 * @size: is the size of the array
 * @action: a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
