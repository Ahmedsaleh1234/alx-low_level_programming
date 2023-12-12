#include "search_algos.h"
/**
 * binary_search - a function that searches
 * @array:  is a pointer to the first element
 * @size: is the number of elemnts
 * @value: is the value to search for
 * Return: intger
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t left = 0, right = size - 1;


	if (!array)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
		{
			printf("%d", array[mid]);
		}
		printf("%d\n", array[mid]);
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}

	}
	return (-1);
}
