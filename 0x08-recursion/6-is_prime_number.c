#include "main.h"

/**
 * prime_a - Calculate if its a prime
 * @a: input
 * @b: divisor
 * Return: (0)
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - returns 1 if integer is prime else returns 0
 * @n: integer considered
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
