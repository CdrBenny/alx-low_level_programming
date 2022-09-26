#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 *   pointed to bt @s with constant byte :c.
 * @s: a pointer
 * @c: the character
 * @n: the number
 *  Return: A pointer to the filled memory @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
		
