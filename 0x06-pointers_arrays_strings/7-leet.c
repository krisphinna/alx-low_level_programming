#include "main.h"

/**
 * leet - Write a function that encodes a string
 * @s: input string
 * Return: an encoded string
 */

char *leet(char *s)
{
	int i = 0, k;
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'},
	     rep[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	while (s[i])
	{
		for (k = 0; k < 10; k++)
			if (s[i] == str[k])
				s[i] = rep[k];
		i++;
	}
	return (s);
}
