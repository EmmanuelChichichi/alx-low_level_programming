#include "lists.h"

/**
 * free_listp - frees a listint_t linked list
 * @head: head of a list
 */

void free_listp(listp_t **head)
{
	listp_t *t;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((t = curr) != NULL)
		{
			curr = curr->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of a list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	listp_t *h = NULL, *newN, *sum;

	while (head != NULL)
	{
		newN = malloc(sizeof(listp_t));

		if (newN == NULL)
			exit(98);

		newN->p = (void *)head;
		newN->next = hptr;
		h = newN;

		sum = h;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&h);
				return (num);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}
	free_listp(&h);
	return (num);
}
