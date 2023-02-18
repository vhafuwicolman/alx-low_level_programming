#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 when successfull
 */
int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	Putchar("\n");
	return (0); }
