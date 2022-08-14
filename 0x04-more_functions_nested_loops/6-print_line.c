#include "main.h"

/**
 * print_line - funtion that draw a straight line
 * @n: number of time the line should be printed
 * Return: no return
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('-');

	}
		_putchar('\n');
}
