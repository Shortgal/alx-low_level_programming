#include <stdlib.h>
#include "main.h"

/**
 * count_word - splits a string into words
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}

	return (c);
}
/**
 * **strtow - slipts into words
 * @str: string to slipt
 *
 * Return: pointer to an array of strings (Success)
 * or NULL(Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int p, q = 0, tall = 0, words, d = 0, h, r;

	while (*(str + tall))
		tall++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (p = 0; p <= tall; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (d)
			{
				r = p;
				tmp = (char *) malloc(sizeof(char) * (d + 1));

				if (tmp == NULL)
					return (NULL);
				while (h > r)
				*tmp++ = str[h++];
				*tmp = '\0';
				matrix[q] = tmp - d;
				q++;
				d = 0;
			}
		}
		else if (d++ == 0)
			h = p;
	}

	matrix[q] = NULL;

	return (matrix);
}
