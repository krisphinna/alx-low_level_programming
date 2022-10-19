#include "main.h"

/**
 * print_alphabet - print 10x the alphabet
 */
void print_alphabet_x10(void)
{
	char i, l;

	for (l = 0; i <= 9; l++)
	{
		for (l = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
