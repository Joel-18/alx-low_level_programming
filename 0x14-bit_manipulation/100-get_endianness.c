#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return:0 (big endian) or 1 (small endian)
 */

int get_endianness(void)
{
	int x = 1;
	int little_or_big;

	little_or_big = (int) (((char *)&x)[0]);
	return (little_or_big);
}
