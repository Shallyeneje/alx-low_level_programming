#include <stdio.h>
/*
 * Description: print the alphabet in lower case
 * and then  in uppercase, folow by a new line
 * Return:0
 */
int main (void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
}

