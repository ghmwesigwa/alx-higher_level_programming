#include "lists.h"

/**
 * check_cycle - Check if a linked list has a cycle.
 * @list: Pointer to the head of the linked list.
 * Return: 0 if no cycle, 1 if a cycle is detected.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	while (slow && fast && fast->next)
	{
		slow = slow->next;      /* Move slow one step */
		fast = fast->next->next; /* Move fast two steps */

		if (slow == fast) /* If they meet, there's a cycle */
			return (1);
	}

	return (0); /* No cycle found */
}

