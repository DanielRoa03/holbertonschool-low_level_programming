#include <stdio.h>

/**
 * main - print the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int c = 48;
	int b = 97;

	while (c < 58)
	{
		putchar(c);
		c++;
	}
	while (b < 103)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
