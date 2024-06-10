/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhambary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 14:34:10 by mhambary          #+#    #+#             */
/*   Updated: 2024/06/09 14:41:02 by mhambary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*join_args(int argc, char **argv)
{
	int		i;
	int		len;
	char	*result;
	int		pos;

	i = 1;
	len = 0;
	while (i < argc)
		len += ft_strlen(argv[i++]) + 1;
	result = (char *)malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	pos = 0;
	i = 1;
	while (i < argc)
	{
		len = 0;
		while (argv[i][len])
			result[pos++] = argv[i][len++];
		if (i < argc - 1)
			result[pos++] = ' ';
		i++;
	}
	result[pos] = '\0';
	return (result);
}
