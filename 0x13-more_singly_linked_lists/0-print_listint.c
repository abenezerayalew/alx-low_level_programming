#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t count = 1;
	if (h->next == NULL)
	return (0);
	while (h->next != NULL)
	{
		if (h->next == NULL)
			putchar('r');
		else
		{
		printf("%d\n",h->n);
		printf("%d\n",h->n);
		//putchar(h->n);
		//putchar('\n');
		//putchar(h->n);
		}
		h = h->next;
		count++;
	}
	return (count);
}
