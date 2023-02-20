#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;
	int j;
	int s;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (s = 2 ; s < 10 ; s++)
			{
				if (i < j && j < s)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(s + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
