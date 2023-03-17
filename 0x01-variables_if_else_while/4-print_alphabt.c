#include <stdio.h>

/**
 * main - display alphabet except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(alpha[i]);
		}
	}
	putchar('\n');
	return (0);
}
