#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: input pointer to s1
 * @s2: input pointer to s2
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr_nstr, *ptr_s1, *ptr_s2;
	int i = 0, len1 = 0, len2 = 0;

	ptr_s1 = s1, ptr_s2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = ptr_s1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = ptr_s2;
	ptr_nstr = malloc(sizeof(char) * (len1 + len2 + 1));
	ptr_s1 = ptr_nstr;
	if (ptr_nstr == NULL)
		return (NULL);
	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			ptr_nstr[i] = *s1;
			s1++;
		}
		else
		{
			ptr_nstr[i] = *s2;
			s2++;
		}
	}
	ptr_nstr[i] = '\0';
	return (ptr_s1);
}
