#include "sort.h"

/**
 * selection_sort - implement selection sort
 * @array: list to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, less;
	int temp, swp;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (less = i, j = i; j < size; j++)
		{
			if (array[j] < array[less])
			{
				less = j;
				swp = 1;
			}
		}
		if (swp == 1)
		{
			temp = array[less];
			array[less] = array[i];
			array[i] = temp;
			print_array(array, size);
			swp = 0;
		}
	}
}
