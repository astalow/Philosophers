#include "philo.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

bool	is_digit_str(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	is_digit_args(int ac, char **av)
{
	size_t	i;

	i = 0;
	while (ac - i > 0)
	{
		if (!is_digit_str(av[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	atoi_philo(unsigned int *num, const char *str)
{
	long long	ans;
	size_t		i;

	i = 0;
	ans = 0;
	*num = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (ans > ((UINT_MAX - 1) - (str[i] - '0')) / 10)
			return (false);
		ans = ans * 10 + (str[i] - '0');
		i++;
	}
	*num = ans;
	return (true);
}
