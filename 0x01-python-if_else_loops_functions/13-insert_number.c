#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, -27);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);

	print_listint(head);

	printf("-----------------\n");

	insert_node(&head, -100);
	insert_node(&head, -10);
	insert_node(&head, -11);

	print_listint(head);

	free_listint(head);

	return (0);
}
