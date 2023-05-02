#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: the head of list.
 *
 * Return: VOID.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		*head = tmp;
		tmp = (*head)->next;
		free(*head);
	}

	*head = NULL;
}


