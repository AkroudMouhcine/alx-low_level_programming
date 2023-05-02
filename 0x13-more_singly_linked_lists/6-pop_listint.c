#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *
 * @head: the head of list.
 *
 * Return: int or 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	tmp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = tmp;

	return (num);
}
