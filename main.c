#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	char	**result;

	i = 0;
	if (argc == 1 || (argc == 2 && !argv[1][i]))
		return (1);
	else if (argc == 2)
		result = ft_split(argv[1]);
	return (0);
}
