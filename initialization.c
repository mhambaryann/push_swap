/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhambary <mhambary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:50:45 by mhambary          #+#    #+#             */
/*   Updated: 2024/06/17 16:44:28 by mhambary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int	*array, int len)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1 - i)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	*create_sorted_array(char **out)
{
	int	*sorted_array;
	int	i;
	int	len;

	len = len_splitted_array(out);
	sorted_array = (int *)malloc(sizeof(int) * len);
	if (!sorted_array)
	{
		free_out(out);
		exit(17);
	}
	i = 0;
	while (i < len)
	{
		sorted_array[i] = (int)ft_atol(out[i]);
		i++;
	}
	bubble_sort(sorted_array, len);
	return (sorted_array);
}

int	*create_unsorted_array(char **out)
{
	int	i;
	int	*unsorted_array;

	unsorted_array = (int *)malloc(sizeof(int) * len_splitted_array(out));
	if (!unsorted_array)
		return (NULL);
	i = 0;
	while (out[i] != NULL)
	{
		unsorted_array[i] = (int)ft_atol(out[i]);
		i++;
	}
	return (unsorted_array);
}

t_node	*create_stack(int *sorted_array, int *unsorted_array, int len)
{
	t_node	*stack_a;
	t_node	*new_node;
	int		i;
	int		j;

	stack_a = NULL;
	new_node = NULL;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (unsorted_array[i] == sorted_array[j])
			{
				new_node = ft_lstnew(j);
				if (!new_node)
				{
					free_stack(stack_a);
					return (NULL);
				}
				ft_lst_add_back(&stack_a, new_node);
				break ;
			}
			j++;
		}
		i++;
	}
	return (stack_a);
}
