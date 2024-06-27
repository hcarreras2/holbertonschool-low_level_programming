#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: A negative value if s1 is less than s2, 0 if s1 equals s2,
 *			and a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int n;

		for (n = 0; s1[n] != '\0' && s2[n] != '\0'; n++)

			if (s1[n] != s2[n])

		return (s1[n] - s2[n]);

		return (0);
}
