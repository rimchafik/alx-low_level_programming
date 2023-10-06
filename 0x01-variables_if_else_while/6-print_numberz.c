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
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
