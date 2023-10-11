#include "main.h"

/**
 * _abs - returns the absolute value of a number
 * @a: parameter to be checked
 * Return: -a or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
