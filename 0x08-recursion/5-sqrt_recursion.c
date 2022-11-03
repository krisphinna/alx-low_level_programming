#include "main.h"

/**
 * _sqrt - help function for _sqr_recursion
 * @n: input number
 * @i: iterator
 * Return: square root of number
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: input number
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
