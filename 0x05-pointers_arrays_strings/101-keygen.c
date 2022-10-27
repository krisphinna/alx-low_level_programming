#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 Always
 */

int main(void)
{
	int contador;
	int checksum;
	int aleatorio;

	srand(time(NULL));
	checksum = 2772;
	contador = 0;

	while (checksum > 122)
	{
		aleatorio = (rand() % 100);
		printf("%c", aleatorio);
		checksum -= aleatorio;
	}
	printf("%c\n", checksum);
	return (0);
}
