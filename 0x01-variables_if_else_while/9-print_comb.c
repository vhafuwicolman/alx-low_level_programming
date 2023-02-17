#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	char i;

	for (i = 0 ;  i < 9 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
