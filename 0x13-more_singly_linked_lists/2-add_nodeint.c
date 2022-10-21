#include "lists.h"

/**
 * add_nodeint - Adds
 * @head: A pointer
 * @n: the integer
 * Return: if the function fails - NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
