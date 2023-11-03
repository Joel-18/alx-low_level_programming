#include "main.h"
#include <stdlib.h>

/**
 * _realloc - allocates a memor block using malloc and free
 * @ptr: pointer to previous memory allocation
 * @old_size: size of allocated space in ptr
 * @new_size: new size of the new allocated block
 * Return: pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nPtr;
	size_t i, max = new_size;
	char *oPtr = ptr;

	if (ptr == NULL)
	{
		nPtr = malloc(new_size);
			return (nPtr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	nPtr = malloc(new_size);
		if (nPtr == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		nPtr[i] = oPtr[i];
	free(ptr);
	return (nPtr);
}
