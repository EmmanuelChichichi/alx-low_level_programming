#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: pointer to singly linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t lis = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		lis++;
		curr = curr->next;
	}
	return (lis);
}
