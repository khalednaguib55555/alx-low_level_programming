#include"main"
/**
 * print_alphabet - print all alphabet in lowercase
 */


void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

