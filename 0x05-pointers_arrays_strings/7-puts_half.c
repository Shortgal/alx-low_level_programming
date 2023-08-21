#include "main.h"
/**
 * puts_half - a function that prints half of a string if odd len,
 * n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int c, m, tall;

	tall = 0;

	for (c = 0; str[c] != '\0'; c++)
		tall++;

	m = (tall / 2);

	if ((tall % 2) == 1)
		m = ((tall + 1) / 2);

	for (c = m; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}
