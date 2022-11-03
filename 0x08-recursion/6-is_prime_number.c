#include "main.h"

/**
 * primeNum - help function for is_prime_number
 * @n: input number
 * @i: iterator
 * Return: 1 if true, 0 if false
 */

int primeNum(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (primeNum(n, i - 1));
}

/**
 * is_prime_number - a function that returns
 * @n: input integer
 * Return: 1 if true, 0 if false
 */

int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (primeNum(n, n - 1));
}

