#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: variable to be checked
 */

void puts2(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p += 2)
	{
		_putchar(str[p]);
		if (str[p + 1] == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
