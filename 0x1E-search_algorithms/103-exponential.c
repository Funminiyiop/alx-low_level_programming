#include "search_algos.h"

/**
* _binary_search - Searches a value in sorted array
*	of integers using binary search.
* @array: A pointer to the first element of array to search.
* @left: Starting index of [sub]array to search.
* @right: Ending index of [sub]array to search.
* @value: search value
* Return: index where the value is located, else,
*	-1 if value not present or array is NULL.
* Description: Prints sub array being searched after each change.
*/

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
* exponential_search - searches for a value in a sorted array of integers
* using the Exponential search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located or -1 if value is not present
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
