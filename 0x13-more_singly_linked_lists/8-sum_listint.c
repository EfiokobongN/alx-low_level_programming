#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint -  function that returns the sum of all the data (n) of a listint_t linked list.
 * @head: first node pointer
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
