/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:36:22 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/15 13:23:06 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	if (size <= 0)
		return ;
	while (size > 1)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}

#include <stdio.h>
int main(void)
{
	int arr[] = { 10, 4, 7, 19, 3, 7, 23 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("정렬전: ");
	for(int i = 0; i < size; i++)
	{
		printf("%d",arr[i]);
		if (i < size -1)
		{
			printf(", ");
		}
	}
	printf("\n");


	ft_sort_int_tab(arr,size);

	for (int i = 0; i < size; i++)
	{
		printf("%d",arr[i]);
		if (i < size -1)
		{
			printf(", ");
		}
	}
	return 0;
}
