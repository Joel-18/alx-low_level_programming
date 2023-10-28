#include "main.h"

/**
 * _isalpha - Function detects both uppercase and lowercase alphabets
 * @c: parameter to be checked
 * Return: Always 1 (Successful) or Always 0 (Failed)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
