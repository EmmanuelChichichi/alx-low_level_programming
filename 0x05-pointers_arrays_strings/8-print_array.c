#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n: elements to be printed
 * @a: pointer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d,", a[i]);
		else if (i > 0 && i < n - 1)
			printf(" %d,", a[i]);
		else if (i == n - 1)
			printf(" %d\n", a[i]);
	}
}
