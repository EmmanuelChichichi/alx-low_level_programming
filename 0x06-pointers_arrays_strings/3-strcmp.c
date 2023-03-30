#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: frist string to be compared
 * @s2: second string to be compared
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] > s2[i])
		return (-1);
	else
		return (1);
}
