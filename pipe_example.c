#include <unistd.h>
#include <stdio.h>

typedef struct s_pipefd
{
	int	read_fd;
	int	write_fd;
}	t_pipefd;

int	main(void)
{
	t_pipefd	fds;
	int			result;

	result = pipe((int *) &fds);

	printf("resultat: %d\n", result);
	printf("fd pour read: %d\n", fds.read_fd);
	printf("fd pour write: %d\n", fds.write_fd);

	return (0);
}
