#include <stdio.h>

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
		if (a % 3 == 0)
		{
			printf("fizz");
		}

		else if (a % 5 == 0)
		{
			printf("buzz");
		}

		else if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("fizzbuzz");
		}

		else
		{
			printf("%d", a);
		}

	}


	printf('\n');
	return (0);
}
