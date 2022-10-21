#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of '_' to be printed
 */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}

	_putchar('\n');
}

