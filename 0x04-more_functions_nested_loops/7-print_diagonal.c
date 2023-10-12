#include "main.h"
/**
 * print_diagonal - hamo eltekha
 * @n: iklads
*/


void print_diagonal(int n)
{
	int n, di, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (di = 1; di <= n; di++)
		{
			for (sp = 1; sp <= di; sp++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
