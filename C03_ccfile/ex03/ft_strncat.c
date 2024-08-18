/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckwon <ckwon@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:51:03 by ckwon             #+#    #+#             */
/*   Updated: 2024/08/17 14:34:45 by ckwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
#include <stdio.h>


char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int nb = 3;

    printf("원본 dest 문자열: '%s'\n", dest);
    printf("원본 src 문자열: '%s'\n", src);

    ft_strncat(dest, src, nb);

    printf("문자열 연결 후 dest: '%s'\n", dest);

    return 0;
}
