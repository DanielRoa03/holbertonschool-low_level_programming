#include <stdio.h>

/**
 *main - prints the alphabet in lowercase with a new line
 *
 * Return: 0
 */
int main(void)
{
	int letter = 97;
	
	while (letter < 123)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
