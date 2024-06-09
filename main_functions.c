#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

void	free_out(char **out)
{
	int	i;

	i = 0;
	if (out == NULL || *out == NULL)
		return ;
	while (out[i])
	{
		free(argv[i]);
		i++;
	}
	free(out);
}
