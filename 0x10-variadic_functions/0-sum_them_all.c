#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: const
 * Return: sum or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int i;
	int ar;

	va_start(arg, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		ar = va_arg(arg, int);
		sum += ar;
	}
	va_end(arg);
	return (sum);
}
