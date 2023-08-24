#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int t;
	int u;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklm";

	for (t = 0; s[t] != '\0'; t++)
	{
		for (u = 0; u < 52; u++)
		{
			if (s[t] == data1[u])
			{
				s[t] = datarot[u];
				break;

			}
		}


	}
	return (s);
}
