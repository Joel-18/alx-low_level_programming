#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * and initializes it with a specific char
 * @size: parameter that holds size of array
 * @c: character to be initilized
 * Return: pointer to array or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int count;

	/* allocate enough memory for all array members */
	ptArray = malloc(size * sizeof(char));
	if (size == 0 || ptArray == NULL)
	{
		return (NULL);
	}

	/* put char c in each of the memory locations */
	for (count = 0 ; count < size ; count++)
	{
		ptArray[count] = c;
	}
	return (ptArray);
}
