#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *
 * starting with 0
 * @n: The value of the times table to be printed
 * Return: Always 0.
 */

void print_times_table(int n)

{
	int num, bus, taxi;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (bus = 1; bus <= n; bus++)
	{
	_putchar(',');
	_putchar(' ');
	taxi = num * bus;
	if (taxi <= 99)
	_putchar(' ');
	if (taxi <= 9)
	_putchar(' ');
	if (taxi >= 100)
	{
	_putchar((taxi / 100 + '0'));
	_putchar(((taxi / 10)) % 10 + '0');
	}
	else if (taxi <= 99 &&  >= 10)
	{
	_putchar((taxi / 10) + '0');
	}
	_putchar((taxi % 10) + '0');
	}
	_putchar('\n');
	}
	}

}

