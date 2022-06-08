#include "main.h"

/**
 * print_alphabet_x10 - a funtion that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char c, io;

	io = 0;

	while (io < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar (c);
		}
		io++;
		_putchar('\n');
	}
}
