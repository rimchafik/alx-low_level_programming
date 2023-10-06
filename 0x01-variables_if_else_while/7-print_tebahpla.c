#include <stdio.h>

/**
 * main - entry point
 *
 * Description : Printing alphabet in reverse using putchar
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
