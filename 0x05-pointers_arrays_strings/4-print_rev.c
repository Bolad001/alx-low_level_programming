#include "main.h"

/**
 * print_rev - program that prints a string in reverse followed by new line
 * @s: string input
 * Return: no return
 *
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; x >= 0; x++)
	{
		if (s[x] == '\0')
		{
			_putchar('\n');
			break;
		}
		for (x--; x >= 0; x--)
			_putchar(s[x]);
		_putchar('\n');
	}

}
