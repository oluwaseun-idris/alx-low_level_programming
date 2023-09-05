#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **meter;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	meter = malloc(sizeof(int *) * height);

	if (meter == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		meter[x] = malloc(sizeof(int) * width);

		if (meter[x] == NULL)
		{
			for (; x >= 0; x--)
				free(meter[x]);

			free(meter);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			meter[x][y] = 0;
	}

	return (meter);
}
