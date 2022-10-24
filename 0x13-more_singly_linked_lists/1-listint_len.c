#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * @h: a pointer
 *
 * Return: the number
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (nodes);
}
