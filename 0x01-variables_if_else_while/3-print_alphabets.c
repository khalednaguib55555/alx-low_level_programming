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
	char cg = 'A';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	while (cg <= 'Z')
	{
		putchar (cg);
		cg++;
	}
	putchar ('\n');

	return (0);
}
		
		

