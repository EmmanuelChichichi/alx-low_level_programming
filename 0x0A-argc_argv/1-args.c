#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: points to string
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%i\n", argc);
	return (0);
}
