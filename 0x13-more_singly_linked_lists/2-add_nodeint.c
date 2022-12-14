#include "lists.h"
#include <string.h>
/**
 * add_nodeint -  a function that adds a new node at the beginning of a list
 *
 * @head: point to the 1st node
 * @n: new data
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	new->next = *head;
	*head = new;

	return (new);
}
