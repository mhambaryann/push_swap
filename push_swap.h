#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	**ft_split(char *str);
int		ft_isdigit(int c);
void	free_out(char **out);
char	*join_args(int argc, char **argv);
int	ft_strlen(char *str);

#endif
