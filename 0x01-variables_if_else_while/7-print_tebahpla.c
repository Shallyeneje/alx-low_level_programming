#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * Description: prints all single digits of base 10 
 * startind from 0, followed by a new line
 * Return:0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return(0);
}

