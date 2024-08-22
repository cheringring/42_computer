#include <unistd.h>

int	ft_space(char c)
{
	if (c == '\n' || c == '\r' || c == '\t'
		|| c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (ft_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
			str++;
		}
		else
			break ;
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int ac, char **av)
{
    int a = ft_atoi(av[1]);
    printf("%d\n",a);
    return 0;
}

