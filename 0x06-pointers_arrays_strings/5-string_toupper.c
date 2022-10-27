#include "main.h"

/**
 * string_toupper - a () changes all l/case lttrs of a string to u/cas
 * @s: input string
 * Return: convert lowercase to uppercase
 */

char *string_toupper(char *s)
{
	char *up_case = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (up_case);
}
