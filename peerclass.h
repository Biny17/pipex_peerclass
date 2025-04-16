#ifndef PEERCLASS_H
# define PEERCLASS_H

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <dirent.h>
#include <string.h>
#include <linux/limits.h>
#include <stdbool.h>

void print_open_fds();

typedef struct s_fdpipe
{
	int	read_fd;
	int	write_fd;
}	t_fdpipe;

#endif
