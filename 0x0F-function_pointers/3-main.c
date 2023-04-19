#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b, ans;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		 printf("Error\n");
		 exit(99);
	}

	ans = op(a, b);

	printf("%d\n", ans);
	return (0);
}
