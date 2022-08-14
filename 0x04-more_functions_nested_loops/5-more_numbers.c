#include "main.h"

/**
 * more_numbers - a function that prints 10 times the number from 0 to 14
 * Return: 0 followed by new line
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + '0');
			}

			_putchar((b % 10) + '0');

		}
		_putchar('\n');
	}

}
