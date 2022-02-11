#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of n and a message
 *
 * Return: 0
 */

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %i is %i and is 0\n", n, n % 10);
	}
	return (0);
}
