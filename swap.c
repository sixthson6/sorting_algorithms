#include "sort.h"

/**
 * swap - swap two values
 * @a: 1st value
 * @b: 2nd value
 */

void swap(int *a, int *b);
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
