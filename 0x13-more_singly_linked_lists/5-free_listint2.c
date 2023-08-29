#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: double lists pointer 
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	for (next = (*head)->next; *head != NULL; *head = next)
	{
		next = (*head)->next;
		free(*head);
	}
}
