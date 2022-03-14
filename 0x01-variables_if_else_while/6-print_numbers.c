#include <stdio.h>

/**
 * main -print single digit numbers
 *
 * Description: print single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 38;

	while (i < 48)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
