#include "main.h"

/**
 * get_bit - return the vlue of a bit at a given index
 * @n: number to be considered
 * @index: index of number
 * Return: value of bit at index or -1 (error)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
