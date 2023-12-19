#include "sort.h"

/**
 * selection_sort - implement selection sort
 * @array: list to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		print_array(array, size);
	}
}
