/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhambary <mhambary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:08:59 by mhambary          #+#    #+#             */
/*   Updated: 2024/06/17 16:49:27 by mhambary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstnew(int index)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->index = index;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lst_add_back(t_node **stack, t_node *new_node)
{
	t_node	*temp;

	if (!stack)
		return ;
	if (!*stack)
		(*stack) = new_node;
	else
	{
		temp = *stack;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
}

void	free_stack(t_node *stack)
{
	t_node	*current;
	t_node	*next;

	current = stack;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
