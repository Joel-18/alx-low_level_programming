#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: first string
 * @accept:second string
 * Return: pointer to byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	for (; *s != '\0'; s++)
	{
		temp = accept;
		for (; *temp != '\0'; temp++)
		{
			if (*s == *temp)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
