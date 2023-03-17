#include <stdio.h>

/**
 * main - display Base Sixteen
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char b16[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(b16[i]);
	}
	putchar('\n');
	return (0);
}
