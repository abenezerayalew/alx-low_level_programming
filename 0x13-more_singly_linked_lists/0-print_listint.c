#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 *
 * @h: point to the 1st node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;


	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
