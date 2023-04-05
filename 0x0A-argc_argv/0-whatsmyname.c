#include <stdio.h>
#include <libgen.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	printf("%s\n", basename(argv[0]));
	return (0);
}
