/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 09:30:34 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/15 12:07:46 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	p;
	int	q;

	p = a / b;
	q = a % b;
	*div = p;
	*mod = q;
}

#include <stdio.h>

int main(void)
{
	int	a = 10;
	int	b = 4;
	int	div;
	int	mod;

	ft_div_mod(a,b,&div,&mod);

	printf(" 10을 4로 나누면?\n");
	printf("몫: %d\n",div);
	printf("나머지: %d",mod);
	return 0;
}
