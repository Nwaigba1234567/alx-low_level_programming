#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - counts and returns number of elements
 * in a doubly linked list
 *
 * @h: pointer to the head of list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
/*Initialize count to 0*/

/*Traverse the linked list and count the number of elements*/
	while (h != NULL)
{
	count++;
	h = h->next;
}
	return (count);
}

