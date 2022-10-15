#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, k;

	a = 97;
	k = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}

	while (k < 91)
	{
		putchar(k);
		k++;
	}

	putchar(10);

	return (0);
}
