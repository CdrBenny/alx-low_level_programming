#include "lists.h"

/**
 * free_listint - Fress a listint_t list.
 * @headd: A pointer to the head of the listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
