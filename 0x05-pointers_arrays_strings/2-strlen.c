#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: variable for length
 * Return: value of l
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
