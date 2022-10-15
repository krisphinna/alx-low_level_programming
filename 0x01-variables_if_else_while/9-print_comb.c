#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int po_comb = 48;

	while (po_comb < 58)
	{
		putchar(po_comb);
		if (po_comb != 57)
		{
			putchar(44);
			putchar(32);
		}
		po_comb++;
	}
	putchar(10);

	return (0);
}
