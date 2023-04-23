#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Prints a text with number
 * Return: Always (Success)
 *
 */

int main(void)

{

	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
	printf("last digit of 98 is 8 and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("last digit of  is 98 and is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("last digit of -98 is -8 and is less than 6 and not 0\n", n, lastd);
	}
	return (0);

}
