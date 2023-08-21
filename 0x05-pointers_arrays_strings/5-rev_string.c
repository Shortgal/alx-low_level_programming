#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: string reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int call = 0;
	int a;

	while (s[call] != '\0')
	call++;
	for (a = 0; a < call; a++)
	{
		call--;
		rev = s[a];
		s[a] = s[call];
		s[call] = rev;
	}
}
