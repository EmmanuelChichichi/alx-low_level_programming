#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: variable to be evaluated
 */

void print_rev(char *s)
{
	char *r = s;

	while (*r != '\0')
	{
		r++;
	}
	r--;
	while (r >= s)
	{
		_putchar(*r);
		r--;
	}
	_putchar('\n');
}
