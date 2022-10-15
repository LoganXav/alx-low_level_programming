#include <stdio.h>
/**
 * main - a program that prints 0-9
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf('\n');
	return (0);
}
