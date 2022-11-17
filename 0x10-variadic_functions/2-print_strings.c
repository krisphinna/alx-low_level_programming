#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between the strings
 * @n:  is the number of strings passed to the function
 * @...: other parameters
 * Return: printed strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *strs;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		strs = va_arg(ap, char*);
		if (strs == NULL)
			printf("(nil)");
		else
			printf("%s", strs);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

