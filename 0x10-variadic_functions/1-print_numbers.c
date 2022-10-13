#include "variable_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints
 * @separator: the string
 * @n: the number
 * @...: a varibales
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("%d");

	va_end(nums);
}

