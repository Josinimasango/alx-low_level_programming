#include "search_algos.h"

/**
 * binary_search - searches for a value in a array
 * @array: pointer to the the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int i, r;
	int left = (int)size - 1;
	int right = 0;

	if (array == NULL)
		return (-1);

	while (right <= left)
	{
		printf("Searching in array:");

		for (i = right; i <= left; i++)
		{
			printf(" %i", array[i]);
			if (i != left)
				printf(",");
		}
		printf("\n");

		r = (int)((right + left) / 2);

		if (value > array[r])
			right = r + 1;
		else if (value < array[r])
			left = r - 1;
		else
			return (r);
	}

	return (-1);
}
