/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhambary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:06:12 by mhambary          #+#    #+#             */
/*   Updated: 2024/06/09 16:32:58 by mhambary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	m(int argc, char **argv)
{
	int		i;
	char	**result;
	char 	*joined_args;


	i = 0;
	if (argc == 1 || (argc == 2 && !argv[1][i]))
	{
		system("leaks push_swap");
		return (1);
	}
	else if (argc == 2)
		result = ft_split(argv[1]);
	else
	{
		joined_args = join_args(argc, argv);
		if (!joined_args)
			return (1);
		result = ft_split(joined_args);
		free(joined_args);
	}
	while(result[i])
	{
		printf("current number %s\n", result[i]);
		i++;
	}
	free_out(result);
//	system("leaks push_swap");
	return (0);
}

int main(int ac, char **av)
{
	m(ac, av);
	system("leaks push_swap");
}