#include "sort.h"

/**
 * swap - swaps variables
 *
 * @x: input
 * @y: input
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - Uses Selection sort algorithm to sort an array
 *
 * @array: The array to be sorted in ascending order and printed
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{

	for (int i = 0; i < size - 1; i++)
	{
		int min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			min = j;
		}
			if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
