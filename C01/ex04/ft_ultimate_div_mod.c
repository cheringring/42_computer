/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 09:32:57 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/15 12:29:11 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
	else
	{
		*a = 0;
		*b = 0;
	}
}

#include <stdio.h>

int	main(void)
{
	int	x = 25;
	int	y = 3;

	printf("25를 3으로 나누겠습니다\n");

	ft_ultimate_div_mod(&x, &y);
	
	printf("몫: %d, 나머지: %d", x, y);
	return 0;
}
