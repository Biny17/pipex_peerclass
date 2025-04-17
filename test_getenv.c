#include "peerclass.h"

int	main(int ac, char *av[])
{
	char	*result;
	if (ac != 2)
	return (0);
	result = ft_getenv(av[1], __environ);
	printf("%s=\n%s\n", av[1], result);
	free(result);
	return (0);
}
