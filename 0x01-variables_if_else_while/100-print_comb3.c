#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if success
 */

int main(void)
{
        int i;
        int j;

        for (i = 0; i < 10; i++)
        {
            for (i = 0; i < 10; i++)
            {
                if (i < j && i != j)
                {
                    putchar(i + '0');
                    putchar(j + '0');
                    if (i + j != 17)
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
        putchar('\n');
        return (0);
}
