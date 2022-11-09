#include "main.h"
#include <stdlib.h>

/**
 * strcount - count the number of words in a string
 * @s: string to count
 * Return: number of words
 */

int strcount(char *s)
{
	int i, m = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				m++;
		}
		else if (i == 0)
			m++;
	}
	m++;
	return (m);
}

/**
 * strtow - a function that splits a string into words.
 * @str: input string
 * Return: a pointer to an array of strings
 */

char **strtow(char *str)
{
	char **array;
	int i, j, k, l, m = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	m = strcount(str);
	if (m == 1)
		return (NULL);
	array = (char **)malloc(m * sizeof(char *));
	if (array == NULL)
		return (NULL);
	array[m - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			array[count] = (char *)malloc(j * sizeof(char));
			j--;
			if (array[count] == NULL)
			{
				for (k = 0; k < count; k++)
					free(array[k]);
				free(array[m - 1]);
				free(array);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				array[count][l] = str[i + l];
			array[count][l] = '\0';
			count++;
			i += j;
		}
		else
			i++;
	}
	return (array);
}
