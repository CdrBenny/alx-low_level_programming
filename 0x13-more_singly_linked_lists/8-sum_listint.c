#include "lists.h"

/**
 * sum_listint - calculates the sum of all
 * @head: the head of the list
 * Return: if the list is empty 0 else the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
