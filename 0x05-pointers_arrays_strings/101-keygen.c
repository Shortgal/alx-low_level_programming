#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid password for the program
 * 101 - crackme
 * Return: Always 0
 */
int main(void)
{
	int walk[100];
	int x, sum, q;

	sum = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		walk[x] = rand() % 78;
		sum += (walk[x] + '0');
		putchar(walk[x] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			q = 2772 - sum - '0';
			sum += q;
			putchar(q + '0');
			break;
		}
	}

	return (0);
}

