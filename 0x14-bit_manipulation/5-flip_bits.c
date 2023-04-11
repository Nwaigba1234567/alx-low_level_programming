#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int c, d;

	d = 0;
	result = 1;
	difference = n ^ m;
	for (c = 0; c < (sizeof(unsigned long int) * 8); c++)
	{
		if (result == (difference & result))
			d++;
		result <<= 1;
	}

	return (d);
}
