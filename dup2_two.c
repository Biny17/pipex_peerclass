#include "peerclass.h"

bool	replace_fd(int this_fd, int by_fd)
{
	int	ret_dup2;
	int	ret_close;

	if (by_fd < 0)
		return (false);
	ret_dup2 = dup2(by_fd, this_fd);
	ret_close = close(by_fd);
	if (ret_dup2 == -1 || ret_close == -1)
		return (false);
	return (true);
}

int	main(void)
{
	int	fd = open("trace.log", O_RDONLY);
	print_open_fds();

	printf("replacing stdin by trace.log...\n\n");
	replace_fd(STDIN_FILENO, fd);

	print_open_fds();
	return (EXIT_SUCCESS);
}
