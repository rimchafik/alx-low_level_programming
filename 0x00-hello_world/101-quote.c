#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: printing a quote usinf a function other than printf and puts
 *
 * Return: 1 (Fail)
*/

int main(void)
{
	char bfr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, bfr, 59);
	return (1);
}
