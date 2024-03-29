#include "search_algos.h"

/**
* interpolation_search - searches a value in sorted array of
*	integers using the Interpolation search algorithm
* @array: pointer to the first element of array to search
* @size: number of elements in array
* @value: search value
* Return: index of value found, else return -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double f;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + f);
		printf("Value checked array[%d]", (int)pos);
		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high)
			break;
	}

	return (-1);
}
