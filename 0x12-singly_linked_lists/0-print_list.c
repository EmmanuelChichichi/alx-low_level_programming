#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: singly linked list
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t lis = 0;
	const list_t *curr = h;

	while (curr != NULL)
	{
		if (curr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", curr->len, curr->str);

		lis++;
		curr = curr->next;
	}
	return (lis);
}
