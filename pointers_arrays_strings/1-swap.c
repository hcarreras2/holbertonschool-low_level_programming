#include "main.h"
/**
 * swap_int - Changes the values of a and b.
 * @a: The first interger to be swapped.
 * @b: The second interger to be swapped.
 *
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
