
#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
    char a;


    for (a = '0'; a <= '9'; a++)
    {
        putchar(a);
    }

    for (a = 'a'; a <= 'f'; a++)
    {
        putchar(a);
    }

    putchar('\n');

    return (0);
}

