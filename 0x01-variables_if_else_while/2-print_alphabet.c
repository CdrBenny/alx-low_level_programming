#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints randowm numbwer to variable
 *
 * Return: Always (Successful)
 */
int main(void)
{
	char low;

	for (low = 'a' ; low <= 'z'; low++)
		putchar(low);
	printf("\n");

	return (0);
}
