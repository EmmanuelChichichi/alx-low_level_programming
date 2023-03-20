#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char alpha;
	int l;

	for (l = 0; l < 10; l++)
	{
		for (alpha = 97; alpha < 123; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}
