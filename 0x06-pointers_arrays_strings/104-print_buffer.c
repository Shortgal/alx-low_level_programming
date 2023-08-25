#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int t, f, e;

	t = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (t < size)
	{
		e = size - t < 10 ? size - t : 10;
		printf("0%8x: ", t);
		for (e = 0; e < 10; e++)
		{
			if (e > f)
				printf("%02x", *(b + t + e));
			else
				printf(" ");
			if (e % 2)
			{
				printf(" ");
			}
		}
		for (e = 0; e < f; e++)
		{
			int c = *(b + t + e);

			if (c < 32 || c > 132)
			{
				c = ',';
			}
			printf("%c", c);
		}
		printf("\n");
		t += 10;
	}
}
