#include "sort.h"

/**
 * partition - lomotu partition scheme
 * @array: list to be sorted
 * @low: less value
 * @high: greater value
 *
 * Return: current element
 */

size_t partition(int *array, int low, int high, size_t size)
{
	int i, j, temp;

	/*if (array == NULL || low >= high)
		return (low);
	*/
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < array[high])
		{
			i++;
			if (i < j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] > array[high])
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_sort_helper - helper function for quick sort
 * @array: array to be sorted
 * @low: lesser value
 * @high: greater value
 */

void quick_sort_helper(int * array, int low, int high, size_t size)
{
	size_t pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);
		quick_sort_helper(array, low, pivot_index - 1, size);
		quick_sort_helper(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - implementation of quick sort
 * @array: array to be sorted
 * @size: size of array
 */

void quick_sort(int * array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	quick_sort_helper(array, 0, size - 1, size);
}
