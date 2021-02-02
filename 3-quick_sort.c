#include "sort.h"
/**
 * quick_sort - function quick sort
 * @array: array to sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;
	quick_sort_recursive(array, size, 0, size - 1);
}
/**
 * quick_sort_recursive -  sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: array to sorted
 * @size: size of array
 * @lo: position to start
 * @hi: position end
 */
void quick_sort_recursive(int *array, size_t size, int lo, int hi)
{
	int loc;

	if (lo < hi)
	{
		loc = partition(array, size, lo, hi);
		quick_sort_recursive(array, size, lo, loc - 1);
		quick_sort_recursive(array, size, loc + 1, hi);
	}
}
/**
 * partition - function to divide array in less and higher
 * @array: array to sorted
 * @size: size of array
 * @lo: position to start
 * @hi: position end
 * Return: value of position of pivote
 */
int partition(int *array, size_t size, int lo, int hi)
{
	int j, i, pivot, tmp;

	pivot = array[hi];
	i = lo;

	for (j = lo; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}

	if (i != j)
	{
		tmp = array[i];
		array[i] = array[hi];
		array[hi] = tmp;
		print_array(array, size);
	}
	return (i);
}
