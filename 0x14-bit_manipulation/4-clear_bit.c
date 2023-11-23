#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a gien index
 * @n: pointer to bit
 * @index: index to be considered
 * Return: 1 (success) else -1 (failed)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	mask = 1;
	mask = mask << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;

	return (1);
}
