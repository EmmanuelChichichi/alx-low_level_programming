#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0, j;
	char *str;

	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == "cifs"[j])
			{
				switch (format[i])
				{
					case 'c':
						printf("%c", va_arg(arg, int));
						break;
					case 'i':
						printf("%d", va_arg(arg, int));
						break;
					case 'f':
						printf("%f", va_arg(arg, double));
						break;
					case 's':
						str = va_arg(arg, char *);
						if (str == NULL)
							str = "(nil)";
						printf("%s", str);
						break;
				}
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
