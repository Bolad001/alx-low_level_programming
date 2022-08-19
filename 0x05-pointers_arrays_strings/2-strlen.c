#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string input
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s[len] != NULL)
		len++;


	return (len);

}
