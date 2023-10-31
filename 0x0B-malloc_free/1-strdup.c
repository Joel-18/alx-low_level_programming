#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string
 * @str: string to be copied
 * Return: pointer to string or NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	int count = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
		count++;

	duplicate = malloc((count * sizeof(char)) + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
