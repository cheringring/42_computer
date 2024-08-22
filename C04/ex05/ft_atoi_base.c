/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:33:35 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/22 16:34:54 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_check(char *base)
{
	int	i;
	int	z;

	i = 0;
	while (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		z = i + 1;
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

int	find_str(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_num(char *str, char *base, int base_len)
{
	int	result;
	int	find;

	result = 0;
	while (*str)
	{
		find = find_str(*str, base);
		if (find == -1)
			return (0);
		result = result * base_len + find;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	result;
	int	find;
	int	sign;

	base_len = 0;
	if (!base_check(base))
		return (0);
	while (base[base_len])
		base_len++;
	sign = 1;
	result = 0;
	while (*str == '\n' || *str == '\r' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == ' ' )
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = ft_num(str, base, base_len);
	return (result * sign);
}
