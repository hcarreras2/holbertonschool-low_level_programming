#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strdup - returns a pointer to a new string
*  wich is a duplicate of the string str.
* @str: The string to be duplicated.
*
* Return: A pointer to the new string, or NULL if memory allocation fails.
*
*/
char *_strdup(char *str)
{
	char *new_str;

	new_str = malloc(sizeof(*new_str) * 3);

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}

