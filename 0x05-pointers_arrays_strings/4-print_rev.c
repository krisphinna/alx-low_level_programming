#include "main.h"

/**
 * print_rev - write a function that prints string on reverse
 * @s: string input
 * Return: 0 Always
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
