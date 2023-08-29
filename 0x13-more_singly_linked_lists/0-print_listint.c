#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t
 *
 * @h: h linklist node
 *
 * Return: numbers of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
