#include "main.h"

/**
 * print_line - draw line with the character "_"
 * @n: number of times to draw the "_" character
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
