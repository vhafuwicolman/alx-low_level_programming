#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successful
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of lon long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
