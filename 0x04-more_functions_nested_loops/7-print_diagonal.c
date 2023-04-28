#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal
 * @n: number of the character \ should be printed
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
	putchar('\n')
	}
	else
	{
		int i, j;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
					if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar('');
			}
			_putchar('\n');
		}
	}
}
