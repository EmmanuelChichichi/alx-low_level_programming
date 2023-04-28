#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: singly linked list
 * Return: number of elements in a linked list_t
 */

size_t list_len(const list_t *h)
{
	size_t lis = 0;
	const list_t *curr = h;

	while (curr != NULL)
	{
		lis++;
		curr = curr->next;
	}
	return (lis);
}
