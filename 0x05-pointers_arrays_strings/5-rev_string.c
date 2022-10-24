#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: input string
 * Return: 0 Always
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char mid;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		mid = s[i];
		s[i++] = s[len];
		s[len] = mid;
	}
}
