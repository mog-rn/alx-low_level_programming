#include "holberton.h"

/**
 * main - Printing the alphabet in lowercase
 *
 * Return 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
	
}
