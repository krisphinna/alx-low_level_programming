#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string one input
 * @s2: string two input
 * @n: compare n and s2
 * Return: a pointer pointing to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	new_str = malloc(sizeof(char) * (i + n + 1));
	if (new_str == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++, j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
