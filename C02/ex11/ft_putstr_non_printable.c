/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:23:56 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/16 18:18:15 by ckwon            ###   ########.fr       */
/*                                                                           */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_nonprintable(char c)
{
	return (c < 32 || c >= 127);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned int	p;
	unsigned int	q;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (ft_is_nonprintable(str[i]))
		{	
			write(1, '\\x', 2);
			p = (unsigned char)str[i] / 16;
			q = (unsigned char)str[i] % 16;
			write(1, &hex[p], 1);
			write(1, &hex[q], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
