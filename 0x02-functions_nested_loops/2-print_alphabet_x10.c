#include "main.h"
/**
* print_alphabet_x10 - print alphabets in lower case 10 times
*/

void print_alphabet_x10(void)
{
char alpha;
char ten;
for (ten = 0; ten < 10; ten++)
{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
_putchar('\n');
}
}
