#include <stdio.h>

/**
 * main -  calculates the largest prime factor of 612852475143
 *
 * Return: 0 Always, if successful
 */


int main(void)
{
	long int x = 612852475143;
	long int factor;

	for (factor = 2; factor < x; factor++)
	{
		if (x % factor == 0)
		{
			x = x / factor;
		}
	}
	printf("%ld\n", factor);
	
	return (0);
}
