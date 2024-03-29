#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 * @head: A pointer to  the head
 * @index: the index
 *
 * Return: if
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
