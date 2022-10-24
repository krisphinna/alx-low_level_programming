#include "main.h"

/**
 * puts2 - write a function that print every other character of a str
 * @str: string input
 * Return: 0 Always
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len--;

	for (; i <= len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
