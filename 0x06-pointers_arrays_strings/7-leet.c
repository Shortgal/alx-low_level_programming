#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int m, q;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; n[m] != '\0'; m++)
	{
		for (q = 0; q < 10; q++)
		{
			if (n[m] == s1[q])
			{
				n[m] = s2[q];
			}
		}

	}
	return (n);
}
