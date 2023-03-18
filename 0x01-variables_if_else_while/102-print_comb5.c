#include <stdio.h>

/**
 * main - print combination of two digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
/*dividesTheTwoDigitNumberBy 10 to findTheTensValue, andThenFindsTheUnitValue*/
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
/*checksWhether a is 98 or b is 99, ifOneOfTheseConditionsIsMet, theLoopStops*/
			}
		}
	}
	putchar('\n');
	return (0);
}
