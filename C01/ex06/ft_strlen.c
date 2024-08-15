/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:54:17 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/15 13:31:02 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

#include <stdio.h>

int main(void)
{
	char	a[] = "hi, my name is...";
	int	len;

	len = ft_strlen(a);
	printf("hi, my name is...의 문자열 갯수는? %d 입니다.", len);
	return 0;
}
