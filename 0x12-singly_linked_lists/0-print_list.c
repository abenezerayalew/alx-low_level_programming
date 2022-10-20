#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 *
 * @h: pointer to head first node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/* If str is NULL, return len (0) and str  (nil)  */
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		/* number of node  */
		counter += 1;
	}
	/*print thee last node*/
	printf("[%d] %s\n", h->len, h->str);

	return (counter);
}
