#include "peerclass.h"
#include "libft.h"

char	*iterpath(char *path_value, char *to_find)
{
	const char **paths = (const char **)ft_split(path_value, ':');
	char		*result;
	int			i;

	i = 0;
	to_find = ft_strjoin("/", to_find);
	result = NULL;
	while (to_find && paths && paths[i])
	{
		result = ft_strjoin(paths[i], to_find);
		if (!result || access(result, X_OK) == 0)
			break ;
		free(result);
		result = NULL;
		i++;
	}
	free(to_find);
	free(paths);
	return (result);
}

int	main(int ac, char **av)
{
	char	*res = NULL;
	char	*path_value = ft_getenv("PATH", __environ);

	if (ac != 2)
		return (0);
	if (path_value)
		res = iterpath(path_value, av[1]);
	printf("resultat: %s\n", res);
	return (0);
}
