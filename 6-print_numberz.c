#include <stdio.h>
/*
 * Description: prints all single digit number of base 10
 *starting from 0, followed by a new line.
 * Return o
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}

