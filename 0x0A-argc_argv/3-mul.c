#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument value
 * Return: print the result of the multiplication
 */

int main(int argc, char **argv)
{
	int a, b, res;

	if (argc <= 2)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
		return (0);
	}
}
