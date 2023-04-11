#include "main.h"

/**
 * clear_bit - sets value of a bit at a given index to 0
 * @n: A bit number passed by pointer
 * @index: The index to set the value at- indices starts from 0
 *
 * Return: If an error occurs - -1 otherwise 1 if it works
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
