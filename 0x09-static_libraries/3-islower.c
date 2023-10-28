#include "main.h"

/**
 * _islower - Program checks for lowercase characters
 * @c: parameter to be checked
 * Return: Always 1 (Successful) or Always 0 (failed)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
