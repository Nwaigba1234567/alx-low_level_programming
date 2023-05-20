#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list.
 * @head: Double pointer to the head of the list.
 * @n: Value to be stored in the new node.
 * Return: Address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
/*Create a new node*/
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
/*Failed to allocate memory for the new node*/
	return (NULL);
	}
/*Assign data and update pointers*/
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
/*If the list is empty, make the new node the head*/
	new_node->prev = NULL;
	*head = new_node;
	}
	else
	{
/* Traverse the list to find the last node*/
	dlistint_t *current = *head;

	while (current->next != NULL)
	{
	current = current->next;
	}
/*Update pointers to insert the new node at the end*/
	current->next = new_node;
	new_node->prev = current;
	}

	return (new_node);
}
