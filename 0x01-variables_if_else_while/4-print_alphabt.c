#include <stdio.h>
/*
 * Description: get a random number and check 
 * Return:o
 */
int main(void)
{
	char c = 'a';

	while (c <='z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return(0);
}

