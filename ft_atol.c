#include "push_swap.h"

int	check_plus_minus(const char *str, int i)
{
	int	count;

	count = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
		count++;
	}
	return (count);
}

long	ft_atol(char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (check_plus_minus(str, i) > 1)
		return ('0' - 48);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (sign * result);
}
