#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments passed to command line
 * @argc: number of arguments
 * @argv: array of arguments (not used)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
