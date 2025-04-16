#include "peerclass.h"

int	main(void)
{
	int	fd = open("trace.log", O_RDONLY);
	if (fd == -1)
		return (EXIT_FAILURE);

	print_open_fds();

	dup2(fd, STDIN_FILENO);
	print_open_fds();
	
	return (EXIT_SUCCESS);
}
