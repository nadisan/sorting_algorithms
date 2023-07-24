#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	int num = 0;
	size_t i, j;

	if (!array || size == 0)
		return;
	j = 0;
	while (j < size)
	{
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				num = array[i];
				array[i] = array[i + 1];
				array[i + 1] = num;
				print_array(array, size);
			}
		}
		j++;
	}
}
