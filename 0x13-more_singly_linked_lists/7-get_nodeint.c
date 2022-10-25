#include "lists.h"
/**
*get_nodeint_at_index - returns the nth node of a listint_t linked list.
*@head: head of linked list
*@index: node index to return
*Return: current node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	if (head == NULL)
		return (0);

	ptr = head;

	while (index != 0)
	{
		ptr = ptr->next;
		index--;
		if (ptr == NULL)
			return (0); /*Out of range*/
	}

	return (ptr);
}
