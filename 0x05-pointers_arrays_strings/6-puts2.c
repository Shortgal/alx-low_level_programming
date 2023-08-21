#include "main.h"
/**
 * puts2 - prints every other character of a string starting with the first one
 * followed by a new line
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int tall = 0;
	int t = 0;
	char *x = str;
	int u;

	while (*x != '\0')
	{
		x++;
		tall++;
	}
	t = tall - 1;
	for (u = 0; u <= t; u++)
	{
		if (u % 2 == 0)
	{
		_putchar(str[u]);
	}
	}
	_putchar('\n');
}
