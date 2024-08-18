/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:52:36 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/18 13:10:45 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	base_check(char *base)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	while (base[len] != '\0')
	{
		len++;
	}
	while (len < 2)
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++
	}
	return (len);
}

void	ft_num(int nbr, char *base, int len)
{
	if (nbr >= len)
	{
		print_number(nbr / len, base, len);
	}
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	check;
	
	check = base_check(base);
	
	if (len < 2)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr == 0)
		write(1, &base[0], 1);
	else
		ft_num(nbr, base, len);
}
