#include "main.h"

/**
 * _isdigit - checks for digit(0 through 9)
 * @c: variable to be checked
 * Return: 1 if digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
