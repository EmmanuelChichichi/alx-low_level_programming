#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: variable
 * @max: another variable
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i < max; i++)
		ptr[i - min] = i;
	return (ptr);
}
