#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: the head of list.
 * @index: variable.
 *
 * Return: node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (i < index && node != NULL)
	{
		node = node->next;
		i++;
	}
	return ((i == index) ? node : NULL);
}
