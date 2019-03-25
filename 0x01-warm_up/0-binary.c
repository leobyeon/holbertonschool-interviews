#include "search_algos.h"

/**
 * binary_search - searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 * or if not present, -1
 */
int binary_search(int *array, size_t size, int value)
{
	int hi = size - 1;
	int low = 0;
	int mid;
	int i;

	if (!array || !size)
		return (-1);

	while (hi >= low)
	{
		i = low;
		mid = (hi + low) / 2;

		printf("Searching in array: ");
		while (i <= hi)
		{
			if (i != hi)
				printf("%i, ", array[i]);
			else
				printf("%i\n", array[i]);
			i++;
		}
		if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			hi = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
