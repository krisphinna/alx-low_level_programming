#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: input string
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * palindrome - help function for is_palindrome
 * @str: input string
 * @s: start
 * @e: end
 * Return: 1 if true, o if false
 */

int palindrome(char str[], int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (palindrome(str, s + 1, e - 1));
	return (1);
}

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: input string
 * Return: 1 if true, 1 if false
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (palindrome(s, 0, len));
}
