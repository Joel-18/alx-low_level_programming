#include <stdio.h>

/**
 * main - Program prints and adds even fibonacci numbers less than 4000000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int limit = 4000000;
	int term1 = 1;
	int term2 = 2;
	int nextterm;
	int sum = 2;

	while (nextterm <= limit)
	{
		nextterm = term1 + term2;
		if (nextterm % 2 == 0)
			sum = sum + nextterm;
		term1 = term2;
		term2 = nextterm;
	}
	printf("%d\n", sum);
	return (0);
}
