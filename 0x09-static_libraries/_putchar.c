#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c:The character to print
 *
 * Return: On Success 1.
 * on error, -1 is returned, and errno is set appropriatelz.
 */
int _putchar(char C)
{
	return (write(1, &c, 1));
}