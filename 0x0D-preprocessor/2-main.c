#include <stdio.h>

/**
 * main - a program that prints the name of file it was compiled from
 *
 * Return: file name
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
