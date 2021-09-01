#include "holberton.h"
/**
* _isalpha - checks for alphabetic character
* @c: parameter or argument of type int
*
* Return: 0 (Successful)
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
