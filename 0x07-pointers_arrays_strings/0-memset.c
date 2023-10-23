#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer that holds memory area
 * @b: constant byte that fills the memory
 * @n: number of bytes of memory to be filled
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

