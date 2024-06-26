#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int var1 = 0
	int var2;

	while (dest[var1] != '\0')
		var1++;

	for (var2 = 0; var2 < n && src[var2] != '\0'; var1++, var2++)
		dest[var1] = src[var2];

	dest[var1] = '\0';

	return dest;
}
