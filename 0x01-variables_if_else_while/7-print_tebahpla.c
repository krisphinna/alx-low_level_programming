#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int rev_alpha = 122;

	while (rev_alpha > 96)
	{
		putchar(rev_alpha);
		rev_alpha--;
	}
	putchar(10);

	return (0);
}
