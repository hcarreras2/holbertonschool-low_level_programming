#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second String.
 * @n: Number of bytes to concatenate
 *
 * Return: returned pointer shall point to a newly allocated space
 * in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concat = malloc(len1 + n + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}