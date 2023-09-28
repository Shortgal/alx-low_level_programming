#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print in brinary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int p;

	for (i = 63; i >= 0; i--)
	{
		p = n >> i;

		if (p & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');

}
