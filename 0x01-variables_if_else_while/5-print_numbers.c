#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints from 0 to 9
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
