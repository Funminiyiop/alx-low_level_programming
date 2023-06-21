#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'prints alphabet in lowercase'
 *
 * Return: Always returns 0
 */

void print_alphabet(void)
{
	char i;

	i = 'a';

	while i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
