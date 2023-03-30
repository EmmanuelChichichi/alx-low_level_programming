#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: string to be used
 * @src: string to be copied
 * @n: variable
 * Return: char variable
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *copy = dest;
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		copy[i] = src[i];
	}
	while (i < n)
	{
		copy[i] = '\0';
		i++;
	}
	return (dest);
}
