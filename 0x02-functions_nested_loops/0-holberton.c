#include "holberton.h"
/**
* main - Entry poin. Calls function to print name
*
* Return: 0 (success)
* On error, -1 is returned, and errno is set appropriately.
*/
int main(void)
{
char a[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
int i;
for (i = 0; i < 9; i++)
{
_putchar(a[i]);
}
_putchar('\n');
return (0);
}
