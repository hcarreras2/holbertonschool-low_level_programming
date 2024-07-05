#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory with malloc.
 * @b: The number of bytes that will be allocated to ptr.
 *
 * Return:  Pointer to memory. If failed returns 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
