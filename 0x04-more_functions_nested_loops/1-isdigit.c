#include "main.h"

/**
 * _isdigit - a funtion that checks for a digit 0-9
 * @c: input character
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
