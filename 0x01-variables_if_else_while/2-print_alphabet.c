#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
      	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alpha[a]);
	}
	putchar('\n');	
	return (0);
}
