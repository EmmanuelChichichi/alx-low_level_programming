#include <stdio.h>

/**
 * main - prints 1 to 100
 *
 * Return: always 0
 */

int main(void)
{
	int n = 1;
	char a1[] = "Fizz";
	char a2[] = "Buzz";
	char a3[] = "FizzBuzz";

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("%s ", a3);
		}
		else if (n % 3 == 0)
		{
			printf("%s ", a1);
		}
		else if (n % 5 == 0)
		{
			printf("%s ", a2);
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
