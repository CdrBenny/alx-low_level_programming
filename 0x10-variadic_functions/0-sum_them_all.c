#include "variable_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum 
 * @n: amoutn
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < 0; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
