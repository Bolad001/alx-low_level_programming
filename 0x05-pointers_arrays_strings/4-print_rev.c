#include "main.h"

/**
 * print_rev - program that prints a string in reverse followed by new line
 * @s: string input
 * Return: no return
 *
 */
void print_rev(char *s)
{
	int x, y = 0;

	for (x = 0; x >= 0; x++)
	{
		if (s[x] == '\0')
		{
			_putchar('\n');
			break;
		}
		y = 0;

		while (y >= 0)
		{
			_putchar(s[y]);

			y--;
		}
		_putchar('\n');
	}

}
