#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: 0
 */


void print_alphabet(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
