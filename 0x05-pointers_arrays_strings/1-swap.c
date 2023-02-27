#include "main.h"
#include <stdio.h>

/**
 *swap_int - swap values of two integers
 *@a: first int
 *@b: second int
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
