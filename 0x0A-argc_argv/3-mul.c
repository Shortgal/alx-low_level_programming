#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int to be converted from the string
 */
int _atoi(char *s)
{
	int a, b, n, d, e, f;

	a = 0;
	b = 0;
	n = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[d] != '\0')
		a++;
	while (a < d && e == 0)
	{
		if (s[a] == 0)
			++b;
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			f = s[a] - '0';
			if (d % 2)
				f = -f;
			n = n * 10 + f;
			n = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
	
	if (e == 0)

		return (0);

	return (n);
}

/**
 * main - multiples two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum, sum1, sum2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	sum1 = _atoi(argv[1]);
	sum2 = _atoi(argv[2]);
	sum = sum1 * sum2;
	printf("%d\n", sum);

	return (0);
}


