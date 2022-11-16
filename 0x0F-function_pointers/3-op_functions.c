#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that  returns the sum of a and b
 * @a: input integer
 * @b: input integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that return the difference of a and b
 * @a: input integer
 * @b: input integer
 * Return: the result the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns the product of a and b
 * @a: input integer
 * @b: input integer
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a () that returns the result of division of a by b
 * @a: input integer
 * @b: input integer
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a () that returns the remainder of division of a by b
 * @a: input integer
 * @b: input integer
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
