#include "main.h"

/**
 * print_most_number - Function to print numbers from 0 - 9
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
