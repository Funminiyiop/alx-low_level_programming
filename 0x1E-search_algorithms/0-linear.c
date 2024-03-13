#include "search_algos.h"

/**
* linear_search - searches a value in an array of integers using
*	Linear search algorithm
* @array: pointer to the first element of array to search in
* @size: number of elements in array
* @value: search value
* Return: first index where value is located, else
*	-1 if value is NULL or not present
*/

int linear_search(int *array, size_t size, int value)
{
	size_t h = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (h < size)
	{
		printf("Value checked array[%lu] = [%d]\n", h, array[h]);
		if (array[h] == value)
			return (h);
		h++;
	}
	return (-1);
}
