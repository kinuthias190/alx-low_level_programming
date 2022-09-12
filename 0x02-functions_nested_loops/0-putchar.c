#include "_putchar.h"

/**
* main - function to print
*
*return 0
*/

int main (void)
{
     	char _putchar[9]= {'s', 'a', 'm', 'u', 'e', 'l', 'k','i', 'n'};

	unsigned char int c;
	for(c=0;c<sizeof(_putchar);c++)

	{
		
		_putchar(_putchar[c]);
	}
_putchar('\n');
}

