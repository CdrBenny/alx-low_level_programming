#include "main.h"

/**
 * _memcpy => memory copy
 * @dest: is destination memory
 * @src: is source memory
 * @n: number pf bytes to be copied
 * Return: string copiedd from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
