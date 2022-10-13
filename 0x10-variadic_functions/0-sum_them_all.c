#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - R
 * @n: the
 * @...: A variable number
 *
 * Return: if n ==
 * otherwise - sum of
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	foor(i = 0, i < n; i++)
		sum += va_arg(ap, int);


	va_end(ap);

	return (sum);
}
