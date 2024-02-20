#include "sort.h"
/**
 * swap - Swap two integers in an array
 * @x: The first integer to swap
 * @y: The second integer to swap
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - Sort an array of integers in an ascending order
 * @array: The array of integers to sort
 * @size: The size of the array
 *
 * Description: Prints the array after each swap
*/
void bubble_sort(int *array, size_t size)
{
	bool sorted;

	if (array == NULL || size < 2)
	return;

	for (int i = 0; i < size - 1; i++)
	{
		sorted = true;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				sorted = false;
			}
		}
		if (sorted == true)
		break;
	}
}
