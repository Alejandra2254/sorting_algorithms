#include "sort.h"
/**
 * bubble_sort -  sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array to sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t max, i;
	int actual, next;

	if (!array || !size)
		return;

	max = size - 1;
	while (max)
	{
		for (i = 0; i < max; i++)
		{
			actual = array[i];
			next = array[i + 1];
			if (next < actual)
			{
				array[i] = next;
				array[i + 1] = actual;
				print_array(array, size);
			}
		}
		max--;
	}
}
