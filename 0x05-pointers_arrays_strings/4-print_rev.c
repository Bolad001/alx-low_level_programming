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
			break;
		}
	}
	for (y = x - 1; y >= 0; y--)

		_putchar(s[y]);

	_putchar('\n');

}
