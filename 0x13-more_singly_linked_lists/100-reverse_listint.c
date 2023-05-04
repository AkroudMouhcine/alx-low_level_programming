#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: the head of list.
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;
	}
	*head = previous;
	return (*head);
}

