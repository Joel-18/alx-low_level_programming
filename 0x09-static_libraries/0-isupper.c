#include "main.h"

/**
 * _isupper - Function returns 1 if uppercase and 0 if lowercase
 * @c: parameter considered
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
