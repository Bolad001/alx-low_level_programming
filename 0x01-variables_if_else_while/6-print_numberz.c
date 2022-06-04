#include<stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0.
 */
int main(void)
{
	char digit;

	for( digit = 0; digit < 10; digit++)
		putchar((digit % 10 + '0'));

	putchar('\n');

		return (0);
}
