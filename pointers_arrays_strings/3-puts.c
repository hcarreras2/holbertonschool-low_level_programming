#include "main.h"

/**
 *_puts - Prints the string to stdout.
 *
 * @str: The string that is going to be printed.
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		++s;
	}
	_putchar('\n');
}
