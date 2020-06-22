#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main(void);
int infinite_while(void);
/**
 * infinite_while - infinite loop
 * Return: int
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
 * main - creates zombie child process 5 times
 * Return: int
 */
int main(void)
{
	int i;
	pid_t ZOMBIE_PID;

	for (i = 0; i < 5; i++)
	{
		ZOMBIE_PID = fork();
		if (ZOMBIE_PID > 0)
			printf("Zombie process created, PID: %d\n", ZOMBIE_PID);
		else
			exit(0);
	}
	infinite_while();
	return (0);
}
