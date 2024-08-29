/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:54:28 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/29 18:54:40 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int		i;
	int		haut;
	int		bas;

	i = 0;
	haut = 0;
	bas = 0;
	while (i < lenght - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			haut++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			bas++;
		i++;
	}
	if (haut == i || bas == i)
		return (1);
	return (0);
}
