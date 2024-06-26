#include "main.h"

/**
 * _strncat - Concatenates at most n bytes from the src string to the
 * dest string.
 * @dest: The destination string to which the source string will be
 * appended.
 * @src: The source string to be appended to the destination string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int var1 = 0;
	int var2;

	while (dest[var1] != '\0')
		var1++;

	for (var2 = 0; var2 < n && src[var2] != '\0'; var1++, var2++)
		dest[var1] = src[var2];

	dest[var1] = '\0';

	return (dest);
}
