#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at idx of a dlistint_t linked list.
 *
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (index > 0)
	{
		if (current == NULL)
			return (-1);

		current = current->next;
		index--;
	}

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}

