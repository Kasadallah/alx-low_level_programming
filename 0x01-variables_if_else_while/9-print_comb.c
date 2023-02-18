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

	for (a = 0; a < 100; a++)
	{
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
