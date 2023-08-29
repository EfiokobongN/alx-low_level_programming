#include "lists.h"
#include <stdio.h>

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
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
