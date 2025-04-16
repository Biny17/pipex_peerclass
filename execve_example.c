#include "peerclass.h"

int	main(void)
{
	char *a;
	a = malloc (42);
	a[1] = 42;
	execve("/bin/ls", (char*[]){"ls", NULL}, NULL);
	printf("Si j'arrive ici c'est que execve a fail\n");
	return (EXIT_FAILURE);
}
