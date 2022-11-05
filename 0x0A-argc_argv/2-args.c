#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument value
 * Return: prints all arguments it receives
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
