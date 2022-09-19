#include "lists.h"
#include <stdio.h>

/**
 * check_cycle - checks if singly linked list is a cycle
 * Return: 0 if no cycle, 1 is yes
 */
int check_cycle(listint_t *list)
{
	listint_t *current = list;
	listint_t *temp = list;

	if (!list)
		return (0);

	while (1)
	{
		/*traverse through nodes as long as linked list node exists*/
		if (current->next != NULL && current->next->next != NULL)
		{
			current = current->next->next;
			temp = temp->next;

			if (current == temp) /*if nodes match, cycle found*/
				return (1);
		}
		else
			return (0);
	}

}
