#include "main.h"

/**
 * swap_int - funtion that swaps two integer
 * @a: first input
 * @b: second input
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
