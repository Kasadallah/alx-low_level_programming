#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  entry
 * Return: always 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
