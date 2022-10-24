#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t count = 1;
	if (h->next == NULL)
	return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
	printf("%d\n", h->n);
}
