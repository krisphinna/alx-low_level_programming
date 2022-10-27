#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 * @s: input string
 * Return: capitalized string words
 */

char *cap_string(char *s)
{
	char *chk = " \t\n,;.!?\"(){}";
	int i;
	int k;

	for (i = 0, k = 0; s[i]; ++i)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			if (i)
			{
				for (k = 0; chk[k] && chk[k] != s[i - 1]; ++k)
					;
			}
			if (chk[k])
				s[k] -= ('a' - 'A');
		}
	}
	return (s);
}
