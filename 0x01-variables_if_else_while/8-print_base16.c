#include <stdio.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char alp;

	for (num = 0; num < 9; num++)
		putchar((num % 10) + '0');
	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
