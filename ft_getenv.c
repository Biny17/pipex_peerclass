#include "libft.h"
#include "peerclass.h"

// return an allocated char *
char	*ft_getenv(char *name, char **env)
{
	const char		*tmp = ft_strjoin(name, "=");
	const size_t	tmplen = ft_strlen(tmp);
	char			*value;
	int				i;

	if (!tmp)
		return (NULL);
	value = NULL;
	i = 0;
	while (env && env[i])
	{
		if (ft_strncmp(env[i], tmp, tmplen) == 0)
		{
			value = ft_strdup(env[i] + tmplen);
			break ;
		}
		i++;
	}
	free((void *)tmp);
	return (value);
}

/*
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
*/
