#include <stdio.h>

/**
 * _strlen - Returns the length of string.
 * @str: The string to get the length off
 * Return: The length of @str
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
