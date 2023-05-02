#include "lists.h"

/**
 * find_listint_loop - finds the loop in a listint_t  linked list.
 * @head: head of the list
 * Return: the address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1 = head;
	listint_t *ptr2 = head;

	while (head && ptr1 && ptr1->next)
	{
		head = head->next;
		ptr1 = ptr1->next->next;

		if (head == ptr1)
		{
			head = ptr2;
			ptr2 =  ptr1;

			while (1)
			{
				ptr1 = ptr2;
				while (ptr1->next != head && ptr1->next != ptr2)
					ptr1 = ptr1->next;
				if (ptr1->next == head)
					break;

				head = head->next;
			}
			return (ptr1->next);
		}
	}

	return (NULL);
}
