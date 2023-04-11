#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: points to a string
 * Return: char
 */

char *_strdup(char *str)
{
	unsigned int i, l;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (l = 0; str[l] != '\0'; l++)
		;
	ptr = (char *)malloc((l + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
