#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars
 * , and initializes it with a specific char
 * @size: variable for string
 * @c: character variable
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
