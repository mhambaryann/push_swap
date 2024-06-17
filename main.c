/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhambary <mhambary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:06:12 by mhambary          #+#    #+#             */
/*   Updated: 2024/06/17 19:13:51 by mhambary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_arguments(char **out)
{
	if (all_are_digits(out) && all_are_integers(out) && has_no_duplicates(out))
		return (1);
	else
	{
		write(1, "Error\n", 6);
		free_out(out);
		system("leaks push_swap");
		exit(17);
	}
	return (0);
}

void	print_stack(t_node *stack)
{
	t_node	*current;

	current = stack;
	while (current)
	{
		printf("Current index: %d\n", current->index);
		current = current->next;
	}
}


int	m(int argc, char **argv)
{
	int		i;
	char	**result;
	char	*joined_args;
	t_node	*stack_a;
	int		len;
	int		*unsorted_array;
	int		*sorted_array;

	i = 0;
	stack_a = NULL;
	sorted_array = NULL;
	unsorted_array = NULL;
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
		result = ft_split(joined_args);
		unsorted_array = create_unsorted_array(result);
		sorted_array = create_sorted_array(result);
		len = len_splitted_array(result);
		free(joined_args);
	}
	if (validate_arguments(result))
	{
		stack_a = create_stack(sorted_array, unsorted_array, len);
		if (is_sorted(stack_a, len))
			printf("Is sorted\nyay\n");
		print_stack(stack_a);
	}
	free_out(result);
	free(sorted_array);
	free(unsorted_array);
	free_stack(stack_a);
	system("leaks push_swap");
	return (0);
}

int	main(int ac, char **av)
{
	m(ac, av);
	system("leaks push_swap");
}
