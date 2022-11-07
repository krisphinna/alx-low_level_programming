#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument value
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	int i, k, res = 0;

	if (argc > 1)
		for (i = 1; i < argc; i++)
		{
			for (k = 0; argv[i][k]; k++)
				if (argv[i][k] < '0' || argv[i][k] > '9')
					return (printf("Error\n"), 1);
			res += atoi(argv[i]);
		}
	printf("%d\n", res);
	return (0);
}
