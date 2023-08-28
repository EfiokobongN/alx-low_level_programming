#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - a function that adds a new node at the beginning of a listint_t
 *
 * @h: double pointer
 * @n: int add
 * Return: NULL if it failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
