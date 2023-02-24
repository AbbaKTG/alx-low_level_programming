#include <stdio.h>

/**
 * main -  calculates the largest prime number of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int x = 612852475143;
	long int y;

	for (y = 2; y < x; y++)
	{
		if (x % y == 0)
		{
			x /= y;
		}
	}
	printf("%ld\n", y);
	return (0);
}
