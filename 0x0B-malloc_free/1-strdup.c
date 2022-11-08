#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory
 * @str: a pointer which is duplicate of this str
 * Return: NULL if str = NULL, pointer to the duplicatd string
 */

char *_strdup(char *str)
{
	char *ptr_nstr, *ptr_dstr;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	ptr_dstr = str;

	while (*str)
	{
		len++;
		str++;
	}
	str = ptr_dstr;
	ptr_nstr = malloc(sizeof(char) * (len + 1));
	ptr_dstr = ptr_nstr;

	if (ptr_nstr != NULL)
	{
		for (; i < len; i++)
		{
			ptr_nstr[i] = *str;
			str++;
		}
		ptr_nstr[i] = '\0';
		return (ptr_dstr);
	}
	else
		return (NULL);
}
