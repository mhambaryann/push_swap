/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhambary <mhambary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:15:09 by mhambary          #+#    #+#             */
/*   Updated: 2024/06/17 19:12:41 by mhambary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

char	**ft_split(char *str);
int		ft_isdigit(int c);
void	free_out(char **out);
char	*join_args(int argc, char **argv);
int		ft_strlen(char *str);
int		is_number(char *current_number);
int		all_are_integers(char **out);
int		all_are_digits(char **out);
int		len_splitted_array(char **out);
int		has_no_duplicates(char **out);
long	ft_atol(char *str);
int		*create_sorted_array(char **out);
int		*create_unsorted_array(char **out);

typedef struct s_node
{
	int				index;
	struct s_node	*next;
}	t_node;

// stack creation, memory management connected with stack
t_node	*create_stack(int *sorted_array, int *unsorted_array, int len);
t_node	*ft_lstnew(int index);
void	free_stack(t_node *stack);
void	ft_lst_add_back(t_node **stack, t_node *new_node);

// sorting functions

int	is_sorted(t_node *stack, int len);
#endif
