#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints elements of a listint_t
 *
 * @h: node head  linklist node
 *
 * Return: nodes  number
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next, len++)
		printf("%d\n", h->n);

	return (len);
}
