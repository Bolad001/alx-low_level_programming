#include "main.h"

/**
 * print_diagonal - function that prints diagonal line in the terminal
 * @n: number of times the line should be printed
 * Return: return diagonal line
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');

		if (a < (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');

}
