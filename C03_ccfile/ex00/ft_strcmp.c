/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:11:06 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/17 13:58:20 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>

int main(void)
{
	char str1[] = "dafsdsdf";
	char str2[] = "AAAAAAAAAAA";

	printf("%s, %s : %d\n", str1,str2, ft_strcmp(str1,str2));
	return 0;
}
