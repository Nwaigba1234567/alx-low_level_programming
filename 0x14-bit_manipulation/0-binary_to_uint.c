#include "main.h"

/**
* binary_to_uint- Converts a binary number to an unsigned int
*
* @b: the char string
*
* Return: the converted number, or 0 or 1 if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int c;

	unsigned int num;

	num = 0;
	if (!b)
		return (0);

	for (c = 0; *(b + c) != '\0'; c++)
	{
		if (*(b + c) == '1')
			num = (num << 1) | 1;
		else if (*(b + c) == '0')
			num <<= 1;
		else
			return (0);
	}
	return (num);
}
