#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u, x, y, z;

	u = 48;
	while (u < 58)
	{
		x = 48;
		while (x < 58)
		{
			z = x + 1;
			y = u;
			while (y < 58)
			{
				while (z < 58)
				{
					putchar(u);
					putchar(x);
					putchar(32);
					putchar(y);
					putchar(z);
					if (u < 57 || x < 56 || y < 57 || z < 57)
					{
						putchar(44);
						putchar(32);
					}
					z++;
				}
				z = 48;
				y++;
			}
			x++;
		}
		u++;
	}
	putchar(10);

	return (0);
}
