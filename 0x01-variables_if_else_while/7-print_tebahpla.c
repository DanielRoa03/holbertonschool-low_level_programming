#include <stdio.h>

/**
 * main - print the alphabet backwards
 *
 * Return: 0
 */
int main(void)
{
	int c = 122;

	while (c > 96)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
