#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: integer
 * @index: area where element is found
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int binary;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	binary = 1ul << index;

	if ((n & binary) == 0)
		return (0);

	return (1);
}
