/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 09:29:13 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/15 11:59:52 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;

	printf("교환전:%d,%d \n", x, y);
	ft_swap(&x, &y);
	printf("교환후:%d,%d", x, y);
	return 0;
}
