#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
*/

void print_binary(unsigned long int n)
{
	int printed = 0;
	unsigned long int binary = 1ul << (sizeof(unsigned long int) * 8 - 1);

	while (binary > 0)
	{
		if (n & binary)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
			_putchar('0');
		binary >>= 1;
	}
	if (!printed)
		_putchar('0');
}
