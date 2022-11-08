#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -a function that concats all the args of your program
 * @ac: integer argument
 * @av: array argument
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr_nstr;
	int len = 0, i = 0, j, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for  (; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len++;
	ptr_nstr = malloc(len * sizeof(char));
	if (ptr_nstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr_nstr[k] = av[i][j];
			k++;
		}
		ptr_nstr[k] = '\n';
		k++;
	}
	ptr_nstr[k] = '\0';
	return (ptr_nstr);
}

