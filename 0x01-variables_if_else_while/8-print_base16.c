#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char hexvalue[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
		putchar(hexvalue[i]);
	putchar('\n');
	return (0);
}
