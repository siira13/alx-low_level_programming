#include "main.h"
/**
* print_alphabet_x10 - prints a - z ten times
*
* Return: Nil
*/
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
