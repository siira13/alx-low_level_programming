#include <stdio.h>
/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
**/

int main (int argc, char *argv[])
{
  int count;

      for (count = 1; count < argc; count++)
	{
	  printf("%s\n",argv[count]);
	}
    
  return 0;
}
