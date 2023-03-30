#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: pointer to array
 * @n: variable
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int p;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		p = a[i];
		a[i] = a[j];
		a[j] = p;
	}
}
