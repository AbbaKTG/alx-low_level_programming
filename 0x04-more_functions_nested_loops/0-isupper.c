#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if paramter i represents an uppercase letter.
 * @i: int representing a character
 * Return: Always 0.
 */
int _isupper(int i)
{
	if (i >= 65 && i <= 90)
	{
		return (1);
	}
	return (0);
}
