#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to a new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int c, q = 0;

	if (str == NULL)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
		c++;
	a = malloc(sizeof(char) * (c + 1));

	if (a == NULL)
		return (NULL);
	for (q = 0; str[q]; q++)
		a[q] = str[q];
	return (a);
}
