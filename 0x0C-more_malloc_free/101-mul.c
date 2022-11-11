#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two positive numbers.
 * @argc: argument count
 * @argv: argument value
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
		return (0);
	}
}
