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
	char		buffer[100];

	result = pipe((int *) &fds);

	printf("resultat: %d\n", result);
	printf("fd pour read: %d\n", fds.read_fd);
	printf("fd pour write: %d\n\n", fds.write_fd);
	
	write(fds.write_fd, "writing in pipe", 16);
	int	n_char = read(fds.read_fd, buffer, 16);
	buffer[n_char] = '\0';
	printf("from pipe: |%s|\n", buffer);
	return (0);
}
