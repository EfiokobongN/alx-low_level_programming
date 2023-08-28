#include "lists.h"

/**
 * listint_len - all elements of a listint_t
 *
 * @h: pointer
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
	h = h->next;
		count++;
	}
	return (count);
}
