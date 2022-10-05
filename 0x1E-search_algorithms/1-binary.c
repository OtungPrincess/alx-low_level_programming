#include "search_algos.h"

/**
 * binary_search - implement binary search algorithm
 * @array: pointer to first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0, right = size - 1, midlle;

	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[right]);
		midlle = (left + right) / 2;
		if (array[midlle] < value)
		{
			left = midlle + 1;
		}
		else if (array[midlle] > value)
		{
			right = midlle - 1;
		}
		else
		{
			return (midlle);
		}

	}
	return (-1);
}
