#include <stdio.h>
/**
  *main - Main function
  *Description:'Print number of 10 using putchar'
  *Return: Always 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');

	return (0);
}
