#include <stdio.h>

/**
 * main - print size
 *
 * description - prints the size of various types on the computer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: 1 byte(s)\n", (int) sizeof(char));
	printf("Size of an int: 4 byyte(s)\n", (int) sizeof(int));
	printf("Size of a long int: 8 byte((s)\n", (int) sizeof(long int));
	printf("Size of a long long int: 8 byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: 4 byte(s)\n", (float) sizeof(float));

	return (0);
}
