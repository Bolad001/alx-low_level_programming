#include <stdio.h>
#include <stdlib.h>

/**
 *main - funtion that prints numbers from 1 to 100
 * print fizz for multiples of 3
 * print buzz for multiples of 5
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if  ((a % 3 == 0) && (a % 5 == 0))
		{
			printf(" FizzBuzz");
		}

		else if (a % 3 == 0)
		{
			printf(" Fizz");
		}

		else if (a % 5 == 0)
		{
			printf(" Buzz");
		}

		else
		{
			printf(" %d", a);
		}
		if (a == 100)
		{
			printf(" ");
		}
	}


	printf("\n");
	return (0);
}
