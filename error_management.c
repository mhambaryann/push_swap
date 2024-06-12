/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhambary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:27:25 by mhambary          #+#    #+#             */
/*   Updated: 2024/06/12 15:24:01 by mhambary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *current_number)
{
	int	i;

	i = 0;
	if (current_number[0] == '-')
	{
		if (i >= 2)
			return (0);
		i++;
	}
	if (current_number[i] == '\0')
		return (0);
	while (current_number[i])
	{
		if (!ft_isdigit(current_number[i]))
			return (0);
		i++;
	}
	return (1);
}

int	all_are_digits(char **out)
{
	int	i;

	i = 0;
	while (out[i])
	{
		if (!is_number(out[i]))
			return (0);
		i++;
	}
	return (1);
}

int	all_are_integers(char **out)
{
	int		i;
	long	num;

	i = 0;
	while (out[i])
	{
		num = ft_atol(out[i]);
		if (num >= INT_MAX || num <= INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

int	len_splitted_array(char **out)
{
	int	len;

	len = 0;
	while (out[len] != NULL)
		len++;
	return (len);
}

int	has_no_duplicates(char **out)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = len_splitted_array(out);
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_atol(out[i]) == ft_atol(out[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
/*
int	validate_arguments(char **out)
{
	if (all_are_digits(out) && are_are_integers(out) && has_no_duplicates(out))
		return (1);
	return (0);
}
*/
