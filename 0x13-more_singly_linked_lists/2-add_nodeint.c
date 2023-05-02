#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: the head of list.
 * @n: intger.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_noude;

	new_noude = malloc(sizeof(listint_t));
	if (new_noude == NULL)
		return (NULL);

	new_noude->n = n;
	new_noude->next = *head;
	*head = new_noude;

	return (*head);
}



