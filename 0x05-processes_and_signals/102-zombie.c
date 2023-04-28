#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * infinite_while - creates an infinite loop to make the program 
 * Return: always 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - creates five zombie processes
 * Return: 0
 */
int main(void)
{
	int z;
	pid_t zombie;

	for (z = 0; z < 5; z++)
	{
		zombie = fork();
		if (!zombie)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie);
	}

	infinite_while();
	return (0);
}
