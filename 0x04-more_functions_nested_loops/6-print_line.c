#include "main.h"
/**
 * print_line - draws a straight line
 *
 * @n: a given number
 * Return: straight line
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(95);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
