#include "3-calc.h"

/**
 * op_add - return the sum of two integers
 * @a: first arg
 * @b: second arg
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: 1st arg
 * @b: 2nd arg
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: 1st arg
 * @b: 2nd arg
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: 1st arg
 * @b: 2nd arg
 * Return: quotient
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
 * op_mod - returns the remainder of the division of a by b
 * @a: 1st arg
 * @b: 2nd arg
 * Return: remainder
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
