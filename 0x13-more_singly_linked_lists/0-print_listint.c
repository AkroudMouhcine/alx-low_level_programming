#include "lists.h"

/**
 * print_listint - prints all the elememts of a listint_t list.
 *
 * @h: a pointer.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		count++;
		h = h->next;
	}
	return (count);
}


