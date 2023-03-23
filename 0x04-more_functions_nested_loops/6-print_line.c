#include "main.h"

/**
 * print_line - draws a straight line
 * @n: variable representing '_'
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
