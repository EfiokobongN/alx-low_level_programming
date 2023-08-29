#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - unction that returns the nth node of a listint_t linked list.
 * @head: first node pointer
 * @index: index of the node
 *
 * Return: index pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
