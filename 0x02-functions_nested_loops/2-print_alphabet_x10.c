#include "main.h"
/**
 *print_alphabet_x10: print 10 times the alphabet in lower case
 *Return: 0 when successful
 */

void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
