#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *new_node, *nodeptr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	new_node = head->next;
	nodeptr = (head->next)->next;

	while (nodeptr)
	{
		if (new_node == nodeptr)
		{
			new_node = head;
			while (new_node != nodeptr)
			{
				nodes++;
				new_node = nodeptr->next;
				nodeptr = nodeptr->next;
			}

			new_node = new_node->next;
			while (new_node != nodeptr)
			{
				nodes++;
				new_node = new_node->next;
			}

			return (nodes);
		}

		new_node = new_node->next;
		nodeptr = (nodeptr->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
