#include "lists.h"

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
