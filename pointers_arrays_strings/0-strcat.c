#include "main.h"
/**
 * _strcat - Concatenates de src string to dest string.
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;

	while (*src)
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

return (dest);
}
