#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - functions that returns a pointer to a 2 dimensional
 *array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional arrays
 */
int **alloc_grid(int width, int height)
{
	int **sum;
	int c, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	sum = malloc(sizeof(int *) * height);

	if (sum == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		sum[c] = malloc(sizeof(int) * width);

		if (sum[c] == NULL)
		{
			for (; c >= 0; c--)
				free(sum[c]);

			free(sum);
			return (NULL);

		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			sum[c][d] = 0;
	}

	return (sum);
}
