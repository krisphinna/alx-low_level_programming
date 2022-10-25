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
	int count;
	int check;
	int alert;

	srand(time(NULL));
	check = 2772;
	count = 0;

	while (check > 122)
	{
		alert = (rand() % 100);
		printf("%c", alert);
		check -= alert;
		count++;
	}
	printf("%c", check);
	return (0);
}
