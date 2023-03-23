#include "main.h"


/**
 * print_square - prints a square
 * @size: represents size of square
 */

void print_square(int size)
{
	int l, s;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (l = 0; l < size; l++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
