#include "lists.h"
/**
*pop_listint - deletes the head node of a listint_t linked list
*@head: head of linked list
*Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int v;

	if (head == NULL)
		return (0);

	ptr = *head;
	if (ptr == NULL)
		return (0);

	v = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (v);
}
