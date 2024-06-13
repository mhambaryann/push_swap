/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhambary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:15:09 by mhambary          #+#    #+#             */
/*   Updated: 2024/06/11 17:10:18 by mhambary         ###   ########.fr       */
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

typedef struct s_node
{
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

t_node	*ft_lstnew(int index);
#endif
