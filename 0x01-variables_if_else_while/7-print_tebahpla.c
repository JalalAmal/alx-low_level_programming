#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	har lettre;

	for (lettre = 'z'; lettre >= 'a'; lettre--)
		putchar(lettre);

	putchar('\n');

	return (0);
}
