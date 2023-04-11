#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ptr[k++] = s1[i++];
	}
	while (s2[j] != '\0')
	{
		ptr[k++] = s2[j++];
	}
	ptr[k] = '\0';
	return (ptr);
}
