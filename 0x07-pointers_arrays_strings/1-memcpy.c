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
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
