#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: a random variable
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int k = 0;
	unsigned int j = 0;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;

	while (s1[i] != '\0')
	{
		ptr[k++] = s1[i++];
	}
	while (s2[j] != '\0' && j < n)
	{
		ptr[k++] = s2[j++];
	}
	ptr[k] = '\0';
	return (ptr);
}
