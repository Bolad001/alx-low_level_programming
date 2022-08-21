#include "main.h"

/**
 * _puts - function that print a string
 * @str: string input
 * Return: no return
 */
void _puts(char *str)
{
	int x = 0;

		for (x = 0; x >= 0; x++)
		{
			if (str[x] = '\0')
			{
				_putchar('\n');
			}
		_putchar(str[x]);

		}

}
