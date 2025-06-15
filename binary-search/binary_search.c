#include "binary_search.h"

const int *binary_search(int value, const int *arr, size_t length)
{
	int	left = 0;
	int	right = length - 1;

	while (left <= right)
	{
		int middle = left + ((right - left) / 2);
		if (value == arr[middle])
			return (&arr[middle]);
		if (value < arr[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (NULL);
}
