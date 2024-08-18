/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:06:39 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/18 08:47:00 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] !=  s2[i])
		{
			return (s1[i] - s2[i]);
	
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int ac, char **av)
{
    unsigned int i;
    i = atoi(av[3]);

    int a = strncmp(av[1], av[2], i);
    printf("strncmp : %d\n", a);
    int c = ft_strncmp(av[1],av[2],i);
    printf("ft_strncmp : %d\n",c);
    return 0;
}
