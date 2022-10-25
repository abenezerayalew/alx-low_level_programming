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

	current = *head;
	while (ptr && ptr->next != NULL)
		ptr = ptr->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	
	if (ptr)
		ptr->next = new;
	else
		*head = new;
	return (new);
}
