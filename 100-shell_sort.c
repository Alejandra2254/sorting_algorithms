#include "sort.h"
/**
 *  shell_sort - sorts an array of integers
 *              in ascending order using the Shell sort algorithm
 * @array: array to be sorted
 * @size: size of array.
 */
void shell_sort(int *array, size_t size)
{
	int gap, len, i, j, tmp;

	(void)array;
	len = (int)size;
	gap = knuth_sequence(len);
	while (gap >= 1)
	{
		for (j = gap; j < len; j++)
		{
			i = j - gap;
			while (i >= 0)
			{
				if (array[i + gap] > array[i])
				{
					break;
				}
				else
				{
					tmp = array[i];
					array[i] = array[i + gap];
					array[i + gap] = tmp;
				}
				i = i - gap;
			}
		}
		print_array(array, size);
		gap /= 3;
	}
}
/**
 * knuth_sequence - function to calculate gap with hnut sequence
 * @size: length of the array
 * Return: the first gap
 */
int knuth_sequence(int size)
{
	int gap;

	gap = 1;
	while (gap < size)
	{
		gap = gap * 3 + 1;
	}
	gap /= 3;
	return (gap);
}
