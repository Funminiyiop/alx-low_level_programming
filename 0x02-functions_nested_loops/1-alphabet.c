#include "main.h"
/**
 * main - Entry point
 * Description: prints alphabet in lowercase,
 * Return: Always returns 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

