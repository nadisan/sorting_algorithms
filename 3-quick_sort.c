#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * partition - sorts an array of integers in ascending order * using the Quick sort algorithm
 *
 * @array: array
 * @low: low element of array
 * @high: high element of array
 * Return: int with next pivot
 */

int partition(int arr[], int low, int high)
{
    int pi = arr[high];
    int i = (low - 1);
    int j = low;

    for (j; j <= high - 1; j++)
    {
        if (arr[j] < pi) 
	{
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

/**
 * quick_sort - sorts an array of integers in ascending order * using the Quick sort algorithm
 *
 * @array: array
 * @size: size of an array
 */
void quick_sort(int *array, size_t size)
{
        int i, pivot;

        if (!array || size < 2)
                return;
	i = 0;
	if (i < size)
	{
		pivot =  partition(array, i ,size);
	}
	quick_sort(array i, pivot - 1);
	quick_sort(array, pivot + 1, size );
}
