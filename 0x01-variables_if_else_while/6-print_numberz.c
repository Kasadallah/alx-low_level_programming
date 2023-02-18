#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  entry
 * Return: always 0
 */

int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
