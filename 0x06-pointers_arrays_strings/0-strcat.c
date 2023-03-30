#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *app = dest;
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		app++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		app[j] = src[j];
	}
	app[j] = '\0';
	return (dest);
}
