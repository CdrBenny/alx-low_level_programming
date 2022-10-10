#include <unistd.h>

/**
 * _putchar - writes
 * @c: The character to print
 *
 * Return: on
 * On error. -1 is returned. and
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
