#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: input integer
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (!s)
		exit(98);
	return (s);
}
