#include "lists.h"
/**
*free_listint - frees a listint_t list
*@head: head of linked list
*/
void free_listint(listint_t *head)
{
	listint_t *ptr, *next;

	ptr = head;

	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
}
