#include "main.h"
/*
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int c;
	int d;

	for (c = 0; c < 8; c++)
	{
		for (d = 0; c < 8; c++)
			_putchar(a[c][d]);
		_putchar('\n');
	}
}
