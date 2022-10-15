#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int basixtn = 0;

	while (basixtn < 48)
	{
		if (basixtn < 10)
			putchar(basixtn + '0');
		else if (basixtn > 41)
			putchar(basixtn - 10 + 'A');
		basixtn++;
	}
	putchar(10);

	return (0);
}

