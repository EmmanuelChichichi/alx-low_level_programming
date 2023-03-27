#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: variable to be checked
 */

void puts2(char *str)
{
	int p;
	p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p += 2;
	}
	_putchar('\n');
}
