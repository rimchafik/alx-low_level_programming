#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print hexadecimal base
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 48;/*48 ASCII = 0 decimal*/

	while (digit <= 102) /*102 ASCII is f hexadecimal*/
	{
		putchar(digit);
		/*after 9 we go to a = 96*/
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
