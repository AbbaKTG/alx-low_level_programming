#include "main.h"

/**
 * print_alphabet_10x - prints the alphabets in lower case x 10
 *
 */

void print_alphabet_x10(void)
{
	char lc_letter;
	int count = 1;

	while (count <= 10)
	{
		for (lc_letter = 'a'; lc_letter <= 'z'; lc_letter++)
			_putchar(lc_letter);
		_putchar('\n');
		count++;
	}
}
