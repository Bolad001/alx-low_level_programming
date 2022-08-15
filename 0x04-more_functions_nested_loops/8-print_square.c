#include "main.h"

/**
 * print_square - function that prints square
 * @size: size of the square
 * Return: return square
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 0; a < size; a++)
	{
		_putchar('#');
		`
		for (b = 0; b < a; b++)
		{
			_putchar('#');

		}
		_putchar('\n');
	}
}
