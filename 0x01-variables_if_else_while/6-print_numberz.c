#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing 0-9 with putchar
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
