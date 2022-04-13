#include <stdlib>
#include "main.h"

/**
 * array_iterator - execute function given as a parameter
 * on each element
 * @size: size of array
 * @array: array to be iterated
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for(i = 0; 1 < size; i++)
		action(array[i]);
}
