#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array to sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, jmin;

	for (i = 0; i < size - 1; i++)
	{
		jmin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jmin])
				jmin = j;
		}
		if (jmin != i)
		{
			int tmp = array[i];

			array[i] = array[jmin];
			array[jmin] = tmp;
			print_array(array, size);
		}
	}
}
