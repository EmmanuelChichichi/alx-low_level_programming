#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: head of a list
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		num++;
		curr = curr->next;
	}
	return (num);
}
