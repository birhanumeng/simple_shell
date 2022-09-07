#include <stdio.h>
#include <unistd.h>

/**
 * main - entry
 *
 * Return: nothing
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("PID: %u\n", my_pid);
	return (0);
}
