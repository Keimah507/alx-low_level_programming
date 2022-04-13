#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: number of elements in array
 * @cmp: pointer to function
 *
 * Return: cmp, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (arrray && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
