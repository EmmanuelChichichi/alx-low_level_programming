#include "main.h"

/**
 * *_strncat - links two strings
 * @dest: string to be linked
 * @src: string to be linked
 * @n: integer representing elements
 * Return: char dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *app = dest;
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		app++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		app[j] = src[j];
	}
	app[j] = '\0';
	return (dest);
}
