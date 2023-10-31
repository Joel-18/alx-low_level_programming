#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer else NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s1s2;
	int s1len = 0;
	int s2len = 0;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		s1len++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		s2len++;

	s1s2 = malloc(((s1len + s2len) * sizeof(char)) + 1);
	if (s1s2 == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		s1s2[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		s1s2[s1len + i] = s2[i];
	return (s1s2);
}
