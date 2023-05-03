#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: the head of list.
 *
 * Return: the resulting sum.
 */
int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum = 0;

	for (curr = head; curr != NULL; curr = curr->next)
	{
		sum += curr->n;
	}

	return (sum);
}
