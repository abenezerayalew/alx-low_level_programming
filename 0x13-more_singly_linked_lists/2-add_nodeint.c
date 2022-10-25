#include "lists.h"

/**
 * add_node -  a function that adds a new node at the beginning of a list
 *
 * @head: point to the 1st node
 * @n: new data
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t*)malloc(sizeof(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	if (*head == NULL)
	new->next = NULL;
	else
	new->next = *head;

	new->n = n;
	*head = new;

	return (*head);
}
