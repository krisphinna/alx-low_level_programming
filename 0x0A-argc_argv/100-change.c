#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints d min num of coins to make change
 * @argc: argument count
 * @argv: argument value
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int amount, coins = 0;

	if (argc > 1)
	{
		amount = atoi(argv[1]);
		if (amount < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (amount % 25 >= 0)
		{
			coins += amount / 25;
			amount = amount % 25;
		}
		if (amount % 10 >= 0)
		{
			coins += amount / 10;
			amount = amount % 10;
		}
		if (amount % 5 >= 0)
		{
			coins += amount / 5;
			amount = amount % 5;
		}
		if (amount % 2 >= 2)
		{
			coins += amount / 2;
			amount = amount % 2;
		}
		if (amount % 1 >= 0)
			coins += amount;
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
