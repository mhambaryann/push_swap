/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhambary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:50:35 by mhambary          #+#    #+#             */
/*   Updated: 2024/06/13 16:54:54 by mhambary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = -1;
	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

int	word_count(char *str)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' '))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' '))
			i++;
	}
	return (wc);
}

void	free_remainder(char **out, int k)
{
	int	i;

	i = 0;
	while (i < k)
		free(out[i++]);
	free(out);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**out;

	out = (char **)malloc(sizeof(char *) * (word_count(str) + 1));
	if (!out)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' '))
			i++;
		j = i;
		while (str[i] && (str[i] != ' '))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			if (!out[k])
			{
				free_remainder(out, k);
				return (NULL);
			}
			ft_strncpy(out[k], &str[j], i - j);
			k++;
		}
	}
	out[k] = NULL;
	return (out);
}
