/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhambary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:27:25 by mhambary          #+#    #+#             */
/*   Updated: 2024/06/11 17:10:21 by mhambary         ###   ########.fr       */
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

int	len_splitted_array(char **out)
{
	int	len;

	len = 0;
	while(out[len] != NULL)
		len++;
	return (len);
}

int	validate_arguments(char **out)
{
	long int	*numbers;
	int			len;

	len = len_splitted_array(out);
	numbers = (long int*)malloc(sizeof(long int*) * len);
	if (!numbers)
		return (NULL);


}
