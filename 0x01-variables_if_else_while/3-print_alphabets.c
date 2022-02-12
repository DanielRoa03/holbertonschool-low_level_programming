#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase whit conditionals
 *
 * Return: 0
 */
int main(void)
{
	int c1 = 97;
	int c2 = 65;

	while (c1 < 123)
	{
		putchar(c1);
		c1++;
	}
	while (c2 < 91)
	{
		putchar(c2);
		c2++;
	}
	putchar('\n');
	return (0);
}
