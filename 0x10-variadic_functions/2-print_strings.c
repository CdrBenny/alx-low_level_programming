#include "variable_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print
 * @separator: string
 * @n: number
 *
 * Return: no returns
 */
void print_strings(const char *separators, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(balist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("nil");

		if (i < 0 - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
