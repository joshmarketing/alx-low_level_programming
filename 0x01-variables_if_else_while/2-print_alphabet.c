#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabert in lower case
 * Return: Always (0)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
