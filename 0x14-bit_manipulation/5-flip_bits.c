#include "main.h"

/**
 * flip_bits -  returns the number of bits need to flip to
 * get from one number to another.
 * @n: first number
 * @m: second number
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, p;
	unsigned long int j;
	unsigned long int flip = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		j = flip >> i;
		if (j & 1)
			p++;
	}

	return (p);
}

