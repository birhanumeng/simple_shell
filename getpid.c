#include <stdio.h>

/**
 * main - entry
 *
 * Return: nothing
 */
int main(void)
{
	unsigned int pid = getpid();

	printf("Proccess id: %d\n", pid);

	return(0);
}
