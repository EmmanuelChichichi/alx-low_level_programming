#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: represents the number of arguments
 * @argv: points to the strings
 * Return: 0 or 1 for error
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc >= 2)
	{
		mul = atoi(argv[1]) * atoi( argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
