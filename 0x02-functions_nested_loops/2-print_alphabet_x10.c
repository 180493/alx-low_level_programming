#include "main.h"

/**
 * print_alphabet_x10 - Print a - z ten times
 * Return: void
 */

void print_alphabet_10(void)

{
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= '2'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
