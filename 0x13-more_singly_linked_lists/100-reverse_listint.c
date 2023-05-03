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
	listint_t *current = *head;
	listint_t *next = NULL;

	if (head == NULL)
		return (NULL);

	for (; current != NULL; previous = current, current = next)
	{
		next = current->next;
		current->next = previous;
	}

	*head = previous;
	return (*head);
}

