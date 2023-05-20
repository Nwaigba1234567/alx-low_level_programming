#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Value to be stored in the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
{
/* Update the previous pointer of the current head*/
	(*head)->prev = new_node;
}
/*Update the head pointer to the new node*/
	*head = new_node;
	return (new_node);
}

