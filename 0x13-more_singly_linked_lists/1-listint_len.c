#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 *
 * @h: point to the 1st node
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 1;

	if (h->next == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
