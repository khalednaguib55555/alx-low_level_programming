#include "main.h"
/**
 * more_numbers - print characters
*/

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}

