#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked
 *
 * @h: pointer to the head
 *
 * Return: number of node
 *
 */
size_t list_len(const list_t *h)
{
	size_t element = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
