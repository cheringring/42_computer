/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:33:12 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/15 12:49:38 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab [size -1 - i];
		tab[size -1 - i] = tmp;
		i++;
	}
}

#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4,5,6};
	int size = sizeof(arr) / sizeof(arr[0]);

	ft_rev_int_tab(arr,size);

	for(int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
