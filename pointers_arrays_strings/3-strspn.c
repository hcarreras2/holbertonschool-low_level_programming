#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The initial segment of the string.
 * @accept: The bytes to check in the initial segment of s.
 *
 * Return: Number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
		}
		if (!*a)
			break;
		s++;
	}
	return (count);
}
