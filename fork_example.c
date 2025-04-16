#include "peerclass.h"

void	action_parent()
{
	printf("Hello from parent!\n");
}
void	action_enfant()
{
	printf("Hello from child!\n");
}

int main()
{
	int	pid;

	pid = fork();
	if (pid < 0)
	{
		perror("fork failed");
		return (EXIT_FAILURE);
	}
	else if (pid == 0)
		action_enfant();
	else
		action_parent();
	return (EXIT_SUCCESS);
}
