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
	new->n=n;
	new->next=NULL;

	new->next=*head;
	*head = new;

	return (*head);
}
