#include <stdio.h>

/**
 * main - Function adds multiples of 3 and 5 in numbers below 1024
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
