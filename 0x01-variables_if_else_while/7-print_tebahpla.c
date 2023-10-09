#include <stdio.h>
/**
 * main - entry
 *
 * Description: 'good program this'
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar (ch);
		--ch;
	}
	putchar ('\n');

	return (0);
}

