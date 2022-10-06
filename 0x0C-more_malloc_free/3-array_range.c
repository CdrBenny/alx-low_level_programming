#include <stdlib.h>
#include "main.h"

/**
 * array_ramge - creates
 * @min: min value
 * @max: max value
 *
 * Return: pointer
 * NULL if min > max
 */
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
