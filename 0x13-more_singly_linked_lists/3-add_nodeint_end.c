#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t list
 *
 * @h: double pointer
 * @n: int add
 * Return: address of new element or NULL if it failed
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	end = *head;
	if (end != NULL)
		while (end->next != NULL)
			end = end->next;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		ptr->next = NULL;
	}
	else
	{
		end->next = ptr;
		ptr->next = NULL;
	}
	return (ptr);
}
