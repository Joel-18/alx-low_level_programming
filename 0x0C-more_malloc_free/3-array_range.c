#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int i, l;
	int *ptA;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptA = malloc(sizeof(int) * l);
	if (ptA == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		ptA[i] = min;
		min++;
	}
	return (ptA);
}
