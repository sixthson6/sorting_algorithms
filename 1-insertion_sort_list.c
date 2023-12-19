#include "sort.h"

/**
 * insertion_sort_list - implement insertion sort
 * @list: list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node;
	int n;

	if (!list)
		return;

	node = *list;
	while (node)
	{
		while(node)
		{
			if (node->next && node->n > node->next->n)
			{
				n = node->n;
				*(int *)&node->n = node->next->n;
				*(int *)&node->next->n = n;
				node = *list;
				print_list(*list);
				break;
			}
			node = node->next;
		}
	}
}
