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

	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		c++;
	}
	putchar('\n');
	return (0);
}
