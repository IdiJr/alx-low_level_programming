#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: index where value is located else, -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int i, j;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		i = left + (right - left) / 2;

		printf("Searching in array: ");
		for (j = left; j < right; j++)
		{
			printf("%d, ", array[j]);
		}
		printf("%d\n", array[right]);

		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}

	return (-1);
}
