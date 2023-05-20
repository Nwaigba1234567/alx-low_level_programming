#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees the memory occupied by each node
 * in a dlistint_t linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
	dlistint_t *next = current->next;

	free(current);
	current = next;
	}
}
