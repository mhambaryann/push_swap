/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhambary <mhambary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:00:26 by mhambary          #+#    #+#             */
/*   Updated: 2024/06/17 19:30:28 by mhambary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node *stack, int len)
{
	int		i;
	t_node	*current;

	current = stack;
	i = 0;
	while (len > 0)
	{
		if (i != current->index)
			return (0);
		i++;
		len--;
		current = current->next;
	}
	return (1);
}

void	sorting_for_three(t_node stack, int len)
{
	
}