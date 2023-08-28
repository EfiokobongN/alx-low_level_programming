#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: head list
 *
 * Return: 0 if error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != 0)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
