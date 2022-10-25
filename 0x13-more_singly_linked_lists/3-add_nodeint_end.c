#include "lists.h"

/*
 * add_nodeint_end - a function that adds a new node at the end of a list
 *
 * @head: point to the 1st node
 * @n: new data
 *
 * REturn: the address of the new element, or NULL if it failled
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new;
	(void)ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	ptr = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	}
	return (*head);
}
