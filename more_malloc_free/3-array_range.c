#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum range of values.
 * @max: Maximum range of values and number of elements.
 *
 * Return: Pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *abc;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	abc = malloc(size * sizeof(int));
	if (abc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		abc[i] = min++;

	return (abc);
}
