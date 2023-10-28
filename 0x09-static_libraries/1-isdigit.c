#include "main.h"

/**
 * _isdigit - Function returns 1 if digit and 0 if not
 * @c: Parameter considered
 * Return: 1 (success) or 0 (failure)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
