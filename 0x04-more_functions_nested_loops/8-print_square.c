#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints square line depending on n.
 * @n : The number of lines using '#' characters to use per row and column
 * Return: void.
 */
void print_square(int n)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
