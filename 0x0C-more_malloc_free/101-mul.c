#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - check if a string contain non-digit char
 * @s: string evaluation
 *
 * Return: 0 always
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - a function to return a string length
 * @s: string evaluation
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - handle errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a program that multiplies two positive numbers.
 * @argc: argument count
 * @argv: argument value
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, mul, num1, num2, i, a = 0, *res;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0';
		mul = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			mul += res[len1 + len2 + 1] + (num1 * num2);
			res[len1 + len2 + 1] = mul % 10;
			mul /= 10;
		}
		if (mul > 0)
			res[len1 + len2 + 1] += mul;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
