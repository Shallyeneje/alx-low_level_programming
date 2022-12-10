#include <stdio.h>
#include <stdlib.h>
/*
 * Description: Get a random alphabrt
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
	putchar('\n');
	return  (0);
}
