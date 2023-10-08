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
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	putchar ('\n');

	return (0);
}
