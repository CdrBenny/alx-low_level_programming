#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 *   pointed to bt @s with constant byte :c.
 * @s: a pointer
 * @c: the character
 * @n: the number
 *  description _memset: over there
 *
 *  Return: A pointer to the filled memory @s.
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;
	for (index = 0; index < n; index++)
		memory[index] = value;

	return(memory);
}
