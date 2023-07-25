#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array
 * @size: size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, index;
	int tmp, swap, flag;

	if (!array || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = i;
		flag = 0;
		for (index = i + 1; index < size; index++)
		{
			if (array[tmp] > array[index])
			{
				tmp = index;
				flag += 1;
			}
		}
		swap = array[i];
		array[i] = array[tmp];
		array[tmp] = swap;
		if (flag != 0)
			print_array(array, size);

	}
}
