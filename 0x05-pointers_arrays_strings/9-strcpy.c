#include "main.h"

/**
 * *_strcpy - copies string
 * @dest: pointer
 * @src: pointer:/
 * Return: always char dest
*/

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
