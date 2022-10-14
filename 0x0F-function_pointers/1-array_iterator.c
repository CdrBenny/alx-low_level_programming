#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - excutes
 * @array: arraz
 * @size: siye
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
