#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int p = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for ( ; p < m ; p++)
	{
		dest[p] = src[p];
	}
	dest[m] = '\0';

	return (dest);
}
