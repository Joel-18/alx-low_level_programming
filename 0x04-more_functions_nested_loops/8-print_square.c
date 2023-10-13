#include "main.h"

/**
 * print_square - function prints a square
 * @size: gives the size of square
 * Return: Void
 */

void print_square(int size)
{
	int i;
	int j;

	j = 0;

	if (size < 1)
		_putchar('\n');

	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
