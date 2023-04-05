#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: pointer to head pointer of linked list
 * @index: nth node
 * Return: NULL or nth node if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int c = 0;

	if (head == NULL)
		return (NULL);

	while ((c < index) && head != NULL) 
	{
		head = head->next;
		c++;
	}

	if (c == index) 
		return (head);

	return (NULL);
}
