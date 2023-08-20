#include "main.h"

/**
 * print_triangle - entry point
 * Description: prints triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int column, square, shapes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (column = 1; column <= size; column++)
		{
			for (shapes = size - column; shapes >= 1; shapes--)
			{
				_putchar(' ');
			}
			for (square = 1; square <= column; square++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
