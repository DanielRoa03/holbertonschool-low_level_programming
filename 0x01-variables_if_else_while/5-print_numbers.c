#include <stdio.h>

/**
 * main - print numbers from zero to 9
 *
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	putchar('\n');
	return (0);
}
