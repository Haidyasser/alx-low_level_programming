#include <stdio.h>

/**
 * premain - Prints a message before main is executed
 *
 * Return: void
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

