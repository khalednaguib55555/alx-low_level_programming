#include "main.h"
/**
 * print_line - hamo eltekha
 * @n: iklads
*/

void print_line(int n)
{
	int in;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (in = 1; in <= n; in++)
			_putchar('_');
		_putchar('_');
	}
}
