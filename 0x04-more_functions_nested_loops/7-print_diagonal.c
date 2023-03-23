#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: variable for '\'
 */

void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
