#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: array to reverse
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
