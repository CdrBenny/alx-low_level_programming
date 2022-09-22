#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: interger parameter to compare index to
 * Return: returns new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
