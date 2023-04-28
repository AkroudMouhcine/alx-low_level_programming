#include "lists.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string.
 *
 * Return: the address of the new element, or NULL if it failed
 */
size_t _strlen(const char *s)
{
	const char *p = s;

	while (*p)
	{
		p++;
	}
	return ((size_t)(p - s));
}

/**
 ** add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to the head of the list.
 * @str: string to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (head == NULL || str == NULL)
	return (NULL);

	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

