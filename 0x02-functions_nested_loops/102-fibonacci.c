#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 * Return: Nothing
 */

int main(void)

{
	int i = 0;
	j = 1, m = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", j);
	else if (i == 1)
	printf(", %ld", m);
	else
	{
	m += j;
	j = m - j;
	printf(", %ld", m);
	}
	++i;
	}
	printf("\n");
	return (0);
}
